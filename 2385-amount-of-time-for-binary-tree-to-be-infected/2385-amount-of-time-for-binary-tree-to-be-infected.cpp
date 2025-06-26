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
    TreeNode* newRoot;
    int start;
    unordered_map<TreeNode*, TreeNode*> parentMap;

    void dfs(TreeNode* root, TreeNode* par) {
        if (!root) return;
        if (root->val == start)
            newRoot = root;
        parentMap[root] = par;
        dfs(root->left, root);
        dfs(root->right, root);
    }

    int maxDepth(TreeNode* root, TreeNode* par = nullptr) {
        if (!root) return 0;
        int lD = 0, rD = 0, pD = 0;

        if (root->left && root->left != par)
            lD = maxDepth(root->left, root);
        if (root->right && root->right != par)
            rD = maxDepth(root->right, root);
        if (parentMap[root] && parentMap[root] != par)
            pD = maxDepth(parentMap[root], root);

        return 1 + max({lD, rD, pD});
    }

public:
    int amountOfTime(TreeNode* root, int st) {
        start = st;
        dfs(root, nullptr);
        return maxDepth(newRoot) - 1;
    }
};
