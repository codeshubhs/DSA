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
    
    void solve(TreeNode*root, vector<int>&ans){
        
        // first find inorder of given trre 
        // store inorder in a vector
        // and traverse a loop on inorder 
        // check bst condition 
        
        if(root==NULL){
            return ;
        }
        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right,ans);
        
    }
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        solve(root, ans);
        
        for(int i=1; i<ans.size(); i++){
            if(ans[i-1]>=ans[i]){
                return false;
            }
        }
        return true;
    }
};