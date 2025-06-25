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
    // int height(TreeNode* root){
    //     if(root==NULL){
    //         return -1;
    //     }
    //     int l=height(root->left);
    //     int r=height(root->right);
    //     return max(l,r)+1;
    // }
    // pair<bool,int> isBalancedFast(TreeNode* root){
    // if(root == NULL){
    //     pair<bool,int> p= make_pair(true,0);
    //         return p;
    //     }
    //     pair<bool,int> left=isBalancedFast(root->left);
    //     pair<bool,int> right=isBalancedFast(root->right);

    //     bool leftAns=left.first;
    //     bool rightAns=right.first;
    //     bool difference= abs(left.second - right.second) <= 1;
    //     pair<bool,int> ans;
    //     ans.second=max(left.second,right.second)+1;
    //     if(leftAns && rightAns && difference){
    //         ans.first = true;
    //     }
    //     else{
    //     ans.first = false;}
    //     return ans;
    // }
    bool isBal=true;
    int maxDepth(TreeNode* root){
        if(!root)
            return 0;
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        if(abs(l-r)>1) isBal=false;
        return max(l,r)+1;
    }

    bool isBalanced(TreeNode* root) {
        // return isBalancedFast(root).first;
        maxDepth(root);
        return isBal;
}};