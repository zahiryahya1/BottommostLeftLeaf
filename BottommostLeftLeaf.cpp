    int findBottomLeftValue(TreeNode* root) {
  
        // want to recursivly do down left subtree then right subtree keeping track of the max depth
        // and the value at the max depth
        // since we are going down left first, the first value at the lowest point will not be over ridden
        
        if (root == NULL)
            return 0;
        
        int maxDepth = 0;
        int val = root->val;
        
        if (root->left != NULL)
            findBottomLeftHelper(root->left, maxDepth, 1, val);
        
        if (root->right != NULL)
            findBottomLeftHelper(root->right, maxDepth, 1, val);

        return val;
    }
    
    void findBottomLeftHelper(TreeNode* node, int & maxDepth, int level, int  & val) {
        
        if (node == NULL)
            return;
        
        if (node->left != NULL)
            findBottomLeftHelper(node->left, maxDepth, level+1, val);
        
        if (node->right != NULL)
            findBottomLeftHelper(node->right, maxDepth, level+1, val);
        
        if(maxDepth < level) {
            maxDepth = level;
            val = node->val;
        }
    }
