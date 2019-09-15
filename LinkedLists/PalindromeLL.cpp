#include<bits/stdc++.h>
//head is the head of you linked list
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
bool check_palindrome(node* head)
{
              
        // Temp pointer  
        node* slow= head; 
  
        // Declare a stack  
        stack <int> s; 
   
  
        // Push all elements of the list  
        // to the stack  
        while(slow != NULL){ 
                s.push(slow->data); 
  
                // Move ahead  
                slow = slow->next; 
        } 
  
        // Iterate in the list again and  
        // check by popping from the stack 
        while(head != NULL ){ 
              
            // Get the top most element  
             int i=s.top(); 
  
             // Pop the element  
             s.pop(); 
  
             // Check if data is not 
             // same as popped element  
            if(head -> data != i){ 
                return false; 
            } 
  
            // Move ahead  
           head=head->next; 
        } 
  
return true; 
}
