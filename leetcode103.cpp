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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if(root == NULL)
            return vec;
        int num = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count = q.size();
            vector<int> vec1;
            stack<int> st;
            while(count){
                TreeNode* temp = q.front();
                q.pop();
                if(num%2==0){
                    vec1.push_back(temp->val);
                }        
                else{
                    st.push(temp->val);
                }
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
                count--;
            }
            while(!st.empty()){
                vec1.push_back(st.top());
                st.pop();
            }
            vec.push_back(vec1);
            num++;
        }
        return vec;
    }
};
