/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int>mp;
    int maxFreq=0;
    int dfs(TreeNode* root){
        if(root==NULL) return 0;
        int left=dfs(root->left);
        int right=dfs(root->right);
        int currSum=left+right+root->val;
        mp[currSum]++;
        // maxFreq=max(maxFreq,mp[currSum]);
        return currSum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        int maxFreq=0;
        for(auto it:mp){
            maxFreq=max(maxFreq,it.second);
        }
            vector<int> ans;
        for(auto it:mp)
            if(it.second==maxFreq)
                ans.push_back(it.first);
        return ans;
    }
};