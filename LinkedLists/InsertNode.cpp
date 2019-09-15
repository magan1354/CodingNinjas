//head is head of linked list,i is the index, data is data of your node
// Following is the node structure
/**************
 class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
 };
***************/

//Node* insertNodeRec(Node *head, int i, int data) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
//}
Node* insertNodeRec(Node* head, int position, int data) {
    if(head->next==NULL){
        return head;
    }
    if (position == 0) {
        Node* node = new Node(data);
        node->next = head;
        return node;
    }
    head->next = insertNodeRec(head->next, position-1, data);
    return head;
}