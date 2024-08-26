/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    void findtra(vector<int>& ans, Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        for(auto x : root->children)
        {
            findtra(ans,x);
        }
        ans.push_back(root->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int>ans;
        findtra(ans,root);
        return ans;
    }
};