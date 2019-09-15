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

Node* deleteNode(Node *head_ref, int position) {
    if (head_ref == NULL) 
      return head_ref; 
  
   // Store head node 
    Node* temp = head_ref; 
  
    // If head needs to be removed 
    if (position == 0) 
    { 
        head_ref = temp->next;   // Change head 
        free(temp);               // free old head 
        return head_ref; 
    } 
  
    // Find previous node of the node to be deleted 
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
  
    // If position is more than number of ndoes 
    if (temp == NULL || temp->next == NULL) 
         return head_ref; 
  
    // Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted 
    Node *next = temp->next->next; 
  
    // Unlink the node from linked list 
    free(temp->next);  // Free memory 
  
    temp->next = next;  // Unlink the deleted node from list 
    return head_ref;
}


