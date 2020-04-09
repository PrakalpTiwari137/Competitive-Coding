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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if(root == NULL)
            return vec;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count = q.size();
            vector<int> vec1;
            while(count){
                TreeNode* temp = q.front();
                vec1.push_back(temp->val);
                q.pop();
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
                count--;
            }
            vec.push_back(vec1);
        }
        return vec;
    }
};
