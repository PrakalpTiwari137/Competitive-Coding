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
    bool Symmetric(TreeNode* leftNode, TreeNode* rightNode){
        bool check = true;
        if(leftNode == NULL && rightNode == NULL)
            return true;
        else if((leftNode == NULL && rightNode != NULL) || (leftNode != NULL && rightNode == NULL))
            return false;
        else if(leftNode->val != rightNode->val)
            return false;
        else if(leftNode->val == rightNode->val)
            return Symmetric(leftNode->left,rightNode->right) && Symmetric(leftNode->right, rightNode->left);
        else
            return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return Symmetric(root->left, root->right);
    }
};
