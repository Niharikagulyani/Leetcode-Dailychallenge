void inorder(TreeNode* root,vector<int> &elements){
        if(root==NULL) return;
        inorder(root->left,elements);
        elements.push_back(root->val);
        inorder(root->right,elements);
    }
    int getMinimumDifference(TreeNode* root) {
    vector<int> elements;
    inorder(root,elements);   
    sort(elements.begin(),elements.end());
    int mini= INT_MAX;
    for(int i=1;i<elements.size();i++){
        mini=min(mini,abs(elements[i]-elements[i-1]));
    }  
    return mini;
}
