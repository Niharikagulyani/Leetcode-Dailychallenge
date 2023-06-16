int maxLevelSum(TreeNode* root) {
    int maxi = INT_MIN;
    if(root==NULL) return NULL;
    queue<TreeNode*> q;
    q.push(root);
    int maxlevel = 1 ;
    int level = 0;
    while(!q.empty()){
        int sum =0 ;
        int size= q.size();
        level++;
        for(int i=0;i<size;i++){
             TreeNode* temp = q.front();
             q.pop();
             if(temp->left!=NULL) q.push(temp->left);
             if(temp->right!=NULL) q.push(temp->right);
             sum+= temp->val;
        }
        if(maxi!=sum){
        maxi=max(maxi,sum);
        if(maxi==sum) maxlevel=level;
        }
    }  
    return maxlevel;  
}
