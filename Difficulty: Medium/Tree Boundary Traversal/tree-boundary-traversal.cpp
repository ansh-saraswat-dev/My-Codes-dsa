/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    void left(Node *root,vector<int>&ans){
        if(root==NULL || root->left==NULL && root->right==NULL) return;
        ans.push_back(root->data);
        if(root->left){
            left(root->left,ans);
        }
        else{
            left(root->right,ans);
        }
    }
    
    void leaf(Node *root,vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        leaf(root->left,ans);
        leaf(root->right,ans);
    }
    
    void right(Node *root,vector<int>&ans){
        if(root==NULL || root->left==NULL && root->right==NULL) return;
        if(root->right){
            right(root->right,ans);
        }
        else{
            right(root->left,ans);
        }
        ans.push_back(root->data);
    }
    
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL) return ans;
        ans.push_back(root->data);
        left(root->left,ans);
        leaf(root->left,ans);
        leaf(root->right,ans);
        right(root->right,ans);
        return ans;
    }
};