int minValue(Node* root)
{
    // Code here
    int minVal=0;
    if(root==NULL)return 0;
    
    if(root->left==NULL)return root->data;
    else 
    
    {
        
        while(root->left!=NULL)
        {
         	root = root->left;   
        }
         minVal = root->data;
    }
    
    return minVal;
			
}
