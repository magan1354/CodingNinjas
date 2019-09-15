node* arrange_LinkedList(node* head)
{
        node* current=head;
		node* evenHead=NULL;
		node* oddHead=NULL;
		node* evenTail=NULL;
	    node* oddTail=NULL;
		while(current!=NULL)
		{
			if((current->data)%2==0)
			{
				if(evenHead==NULL)
				{
					evenHead=evenTail=current;
				}
				else
				{
					evenTail->next=current;
					evenTail=current;
				}
			}
			else
			{
				if(oddHead==NULL)
				{
					oddHead=oddTail=current;
				}
				else
				{
					oddTail->next=current;
					oddTail=current;
				}
			}
			current=current->next;
		}
		oddTail->next=evenHead;
		evenTail->next=NULL;
		return oddHead;
//write your code here
}
