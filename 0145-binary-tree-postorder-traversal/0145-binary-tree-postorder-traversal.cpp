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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*> s1;
        s1.push(root);
        while(!s1.empty())
        {
            root=s1.top();
            s1.pop();
            postorder.push_back(root->val);
            if(root->left!=NULL)
            {
                s1.push(root->left);
            }
            if(root->right!=NULL)
            {
                s1.push(root->right);
            }
        }
        reverse(postorder.begin(),postorder.end());
        return postorder;
    }
};