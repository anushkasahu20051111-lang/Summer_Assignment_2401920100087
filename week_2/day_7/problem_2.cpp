class Solution {
public:
TreeNode* first=nullptr;
TreeNode* last=nullptr;
TreeNode* prev=nullptr;
TreeNode* middle=nullptr;
void inorder(TreeNode* root){
    if(root==nullptr) return;
    inorder(root->left);
    if(prev && prev->val>root->val){
        if(first==nullptr){
            first=prev;
            middle=root;
        }
        else{
            last=root;
        }
    }
    prev=root;
    inorder(root->right);
}
    void recoverTree(TreeNode* root) {
        inorder(root);
        if(first && last){
            swap(first->val , last->val);
        }
        else{
            swap(first->val,middle->val);
        }
    }
};
