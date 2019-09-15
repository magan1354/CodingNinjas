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

void printIthNode(Node *head, int i) {
    Node* current = head;  
      
    // the index of the  
    // node we're currently  
    // looking at  
    int count = 0;  
    while (current != NULL)  
    {  
        if (count == i)  
            cout<<current->data; 
        
        count++;  
        current = current->next;  
    }  
  
    /* if we get to this line,  
    the caller was asking  
    for a non-existent element  
    so we assert fail */     
}


