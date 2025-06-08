/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    void solve(Node* root, int k, int currSum, unordered_map<int,int> &prefixSum, int &count) {
        if (!root)
            return;

        currSum += root->data;

        // If the current sum itself is equal to k
        if (currSum == k)
            count++;

        // If there exists a prefix path such that currentSum - prefix = k
        if (prefixSum.find(currSum - k) != prefixSum.end())
            count += prefixSum[currSum - k];

        // Increment current prefix sum count
        prefixSum[currSum]++;

        // Recurse left and right
        solve(root->left, k, currSum, prefixSum, count);
        solve(root->right, k, currSum, prefixSum, count);

        // Backtrack: remove the current prefix sum count
        prefixSum[currSum]--;
    }

    int sumK(Node *root, int k) {
        unordered_map<int, int> prefixSum;
        int count = 0;
        solve(root, k, 0, prefixSum, count);
        return count;
    }
};