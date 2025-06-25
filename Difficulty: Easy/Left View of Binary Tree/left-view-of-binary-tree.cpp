/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    void solve(Node* root, vector<int> &ans,int level){
        if(root==NULL) return ;
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        solve(root->left,ans,level+1);
        solve(root->right,ans,level+1);
        
    }
  
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        solve(root,ans,0);
        return ans;
    }
};