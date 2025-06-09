// Class that contains the logic to build the binary tree
/*
Definition of the Node class
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    void createMapping(vector<int> &inorder, map<int,int> &nodeToIndex,int n){
        for(int i=0;i<n;i++){
            nodeToIndex[inorder[i]] = i;
        }
    }
    Node* solve(vector<int> &inorder, vector<int> &preorder,
    int &index,int inorderStart,int inorderEnd,
    int n,map<int,int> &nodeToIndex){
    
        if(index >= n || inorderStart > inorderEnd){
            return NULL;
        }
        
        int element=preorder[index++];
        Node* root= new Node(element);
        int position = nodeToIndex[element];
        
        root->left = solve(inorder,preorder,index,inorderStart,position-1,n,nodeToIndex);
        root->right = solve(inorder,preorder,index,position+1,inorderEnd,n,nodeToIndex);
        
        return root;
    
        
    }
  
    // Function to build the tree from given inorder and preorder traversals
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        int n=inorder.size();
        int preOrderIndex=0;
        map<int,int> nodeToIndex;
        createMapping(inorder,nodeToIndex,n);
        Node* ans=solve(inorder,preorder,preOrderIndex,0,n-1,n,nodeToIndex);
        return ans;
    }
};