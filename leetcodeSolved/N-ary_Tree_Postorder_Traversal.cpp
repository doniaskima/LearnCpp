//https://leetcode.com/problems/n-ary-tree-postorder-traversal/description/

class Solution {
private: 
    void postorder(Node* root, vector<int>& postOrderTraversal){
       if(root == NULL){
             return;
        }
        for(int i=0; i<root->children.size(); i++){
            postorder(root->children[i],postOrderTraversal);
        }
        postOrderTraversal.push_back(root->val);
    }

public:
    vector<int> postorder(Node* root) {
        vector<int> postOrderTraversal;
        postorder(root, postOrderTraversal);
        return postOrderTraversal;
    }
};