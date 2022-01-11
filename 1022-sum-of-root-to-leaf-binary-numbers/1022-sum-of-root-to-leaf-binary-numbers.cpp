
class Solution {
public:
    int func(TreeNode* root,int c_val){
        if(!root) return 0;
        c_val=(c_val<<1)|root->val;
        if(!root->left and !root->right) return c_val;
        
        
        return func(root->left,c_val)+func(root->right,c_val);
    }
    int sumRootToLeaf(TreeNode* root) {
        return func(root,0);
    }
};