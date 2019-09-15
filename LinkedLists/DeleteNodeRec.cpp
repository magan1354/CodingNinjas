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

//Node* deleteNodeRec(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
//}
Node* deleteNodeRec(Node* head, int k) 
{ 
    // If invalid k 
    if (k < 0) 
       return head; 
  
    // If linked list is empty  
    if (head->next == NULL) 
       return head; 
   
    // Base case (start needs to be deleted) 
    if (k == 0) 
    { 
        Node *res = head->next; 
        delete(head); 
        return res;   
    } 
      
    head->next = deleteNodeRec(head->next, k-1); 
    return head; 
} 

