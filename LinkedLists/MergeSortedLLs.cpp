/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node* mergeTwoLLs(Node *head1, Node *head2) {
    Node* result = NULL;  
      
    /* Base cases */
    if (head1 == NULL)  
        return(head2);  
    else if (head2 == NULL)  
        return(head1);  
      
    /* Pick either a or b, and recur */
    if (head1->data <= head2->data)  
    {  
        result = head1;  
        result->next = mergeTwoLLs(head1->next, head2);  
    }  
    else
    {  
        result = head2;  
        result->next = mergeTwoLLs(head1, head2->next);  
    }  
    return result;  
    
}


