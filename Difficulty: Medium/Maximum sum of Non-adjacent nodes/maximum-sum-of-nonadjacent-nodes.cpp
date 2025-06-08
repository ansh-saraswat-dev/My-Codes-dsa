// Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    pair<int,int> solve(Node *root){
        if(root==NULL){
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        pair<int,int> leftAns=solve(root->left);
        pair<int,int> rightAns=solve(root->right);
        pair<int,int> ans;
        ans.first = root->data + leftAns.second + rightAns.second;
        ans.second=max(leftAns.first,leftAns.second)+max(rightAns.first,rightAns.second);
        
        return ans;
        
    }
    
    // Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) {
        // code here
        pair<int,int> res=solve(root);
        return max(res.first,res.second);
    }
};