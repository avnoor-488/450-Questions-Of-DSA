int kthLastElement(node *head, int k){
    int count=0;    
    node *temp=head;    
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
        
    }        
    temp=head;
      for (int i = 1; i < count - k + 1; i++)
        temp = temp->next;
    
    return temp->data;
    
    
}
