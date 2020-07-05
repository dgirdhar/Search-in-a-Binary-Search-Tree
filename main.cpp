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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ret = root;
        
        if (ret != nullptr) {
            if (ret->val != val) {
                if (val < root->val && root->left != nullptr) {
                    ret = searchBST(root->left, val);    
                }
                else if (val > root->val && root->right != nullptr) {
                    ret = searchBST(root->right, val);
                }
                else {
                    ret = nullptr;
                }
            }
        }
        
        return ret;
    }
};
