// https://leetcode.com/problems/n-ary-tree-postorder-traversal

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
public:
    vector <int>res;
    void calc(Node *root)
    {
        if(root ==nullptr)
            return;
        for(int i=0;i<root->children.size();i++)
        {
           
            calc(root->children[i]);
            
        }
         res.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
       calc(root);
        return res;
        
    }
};