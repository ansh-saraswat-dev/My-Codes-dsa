// User function Template for C++

class Solution {
  public:
    void flatten(Node* root) {
        Node* curr = root;

        while (curr != NULL) {
            if (curr->left) {
                // Find the rightmost node in the left subtree
                Node* pred = curr->left;
                while (pred->right) {
                    pred = pred->right;
                }

                // Attach the original right subtree to the rightmost node
                pred->right = curr->right;

                // Move the left subtree to the right
                curr->right = curr->left;
                curr->left = NULL;
            }

            // Move to the next right node
            curr = curr->right;
        }
    }
};
