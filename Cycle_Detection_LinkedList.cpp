bool containsCycle(node *head){
    //Complete this function 
    node *slow=head;
    node *fast=head;
    bool ans=0;
    
    while(slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast)
        {
            ans=1;
            break;            
        }
    }
    return ans;    
}
