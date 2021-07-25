int getMiddle(Node *head)
{

	Node *fast_ptr = head;
	Node *slow_ptr=head;
	if (head!=NULL) 
    { 
        while (fast_ptr != NULL && fast_ptr->next != NULL) 
        { 
            fast_ptr = fast_ptr->next->next; 
            slow_ptr = slow_ptr->next; 
        } 
         
    } 
    return slow_ptr->data;
}
