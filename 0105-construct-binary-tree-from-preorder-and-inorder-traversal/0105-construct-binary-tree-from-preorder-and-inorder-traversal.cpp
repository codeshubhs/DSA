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
    int preIndex=0;
    TreeNode* buildTreehelper(vector<int>&preorder, vector<int>&inorder, int is, int ie){
        if(is>ie){
            return NULL;
        }
        int element= preorder[preIndex++];
        TreeNode* root= new TreeNode(element);
        int inIndex;
        
        for(int i=is; i<=ie; i++){
            
            if(inorder[i]==root->val){
                inIndex=i;
                break;
            }
        }
        
        root->left= buildTreehelper(preorder, inorder, is, inIndex-1);
        root->right= buildTreehelper(preorder, inorder, inIndex+1, ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* ans= buildTreehelper(preorder, inorder, 0, inorder.size()-1);
        
        return ans;
    }
};