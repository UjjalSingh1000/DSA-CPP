/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  TreeNode* trimBST(TreeNode* root, int L, int R) {
    if(root == NULL) return NULL;
    
    if(root->val >= L and root->val <= R) {
      root->left = trimBST(root->left, L, R);
      root->right = trimBST(root->right, L, R);
      return root;
    } else if(root->val < L) {
      return trimBST(root->right, L, R);
    } else {
      return trimBST(root->left, L, R); 
    }
  }
};