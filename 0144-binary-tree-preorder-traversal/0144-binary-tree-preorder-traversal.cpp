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
  /* 
  Method-1: Recursion 
  void solve(TreeNode*root, vector<int>&v){
        
        if(root==NULL){
            return ;
        }
       v.push_back(root->val);
       solve(root->left,v);
       solve(root->right,v);
    }*/
    vector<int> preorderTraversal(TreeNode* root) {
        /*vector<int>v;
        
        solve(root,v);
        return v;*/
        
        // Method-2 : Iterative method 
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        stack<TreeNode*>s;
        
        s.push(root);
        while(!s.empty()){
            root=s.top();
            s.pop();
            ans.push_back(root->val);
            
            if(root->right){
                s.push(root->right);
            }
            if(root->left){
                s.push(root->left);
            }
        }
        return ans;
    }
};