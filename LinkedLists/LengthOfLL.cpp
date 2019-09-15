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

int length(Node *head) {
    int count = 0; // Initialize count  
    Node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        count++;  
        current = current->next;  
    }  
    return count;  
}


