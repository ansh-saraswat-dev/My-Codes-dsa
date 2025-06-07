/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
    vector<int> diagonal(Node* root){
        vector<int> result;
        if(!root) return result;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            while(curr){
                result.push_back(curr->data);
                if(curr->left)
                    q.push(curr->left);
                curr=curr->right;
            }
        }
        return result;
    }
  
    // vector<int> diagonal(Node *root) {
    //     // code here
    //     diagonal(root);
    // }
};