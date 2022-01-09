/* struct Node
{
    int data;
    Node *next;
  	Node *prev;
};
Above structure is used to define the linked list, You have to complete the below functions only */
Node* rotateByK(Node* head, int k)
{
	 if(head == NULL)
    return head;
    if(k == 0)
    return head;
    Node* first = head;
    Node* second = head;
    Node* newHead;
  //Worked on idea of reaching nth node from last & then changing links.
    for(int i=0; i<k; i++)
    second = second->next;
    if(second == NULL) // it means k = length of LL.
    {
        return head;
    }
    while(second->next!=NULL)
    {
        second = second->next;
        first = first->next;
    }
    // made list circular.
    second->next = head;
    head->prev = second;
  //got new head.
    newHead = first->next;
    first->next = NULL;
    newHead->prev = NULL;
    return newHead;
}
