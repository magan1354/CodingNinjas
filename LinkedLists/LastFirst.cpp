/*************
 Following is the Node structure already written.

 template <typename T>
 class Node {
	public:
	T data;
	Node* next;
 
	Node(T data) {
 next = NULL;
 this->data = data;
	}
 
	~Node() {
 if (next != NULL) {
 delete next;
 }
	}
 };
 
*************/


Node<int>* moveToFront(Node<int> *head_ref) {
	if (head_ref == NULL || head_ref->next == NULL)  
        return head_ref;  
  
    /* Initialize second last 
    and last pointers */
    Node<int> *secLast = NULL;  
    Node<int> *last = head_ref;  
  
    /*After this loop secLast contains 
    address of second last node and  
    last contains address of last node in Linked List */
    while (last->next != NULL)  
    {  
        secLast = last;  
        last = last->next;  
    }  
  
    /* Set the next of second last as NULL */
    secLast->next = NULL;  
  
    /* Set next of last as head node */
    last->next = head_ref;  
  
    /* Change the head pointer 
    to point to last node now */
    head_ref = last;
    return head_ref;
}
