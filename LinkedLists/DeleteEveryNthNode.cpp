// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/

node* skipMdeleteN(node  *head, int M, int N) {
    node *curr = head, *t;  
    int count;  
  
    // The main loop that traverses 
    // through the whole list  
    while (curr)  
    {  
        // Skip M nodes  
        for (count = 1; count < M &&  
                curr!= NULL; count++)  
            curr = curr->next;  
  
        // If we reached end of list, then return  
        if (curr == NULL)  
            return head;  
  
        // Start from next node and delete N nodes  
        t = curr->next;  
        for (count = 1; count<=N && t!= NULL; count++)  
        {  
            node *temp = t;  
            t = t->next;  
            free(temp);  
        }  
          
        // Link the previous list with remaining nodes  
        curr->next = t;  
  
        // Set current pointer for next iteration  
        curr = t;
    }
    return head;
}
