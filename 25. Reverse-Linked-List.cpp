#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *temp=head,*curr=NULL,*prev=head;
    while(temp)
    {
        LinkedListNode<int> *nxt=temp->next;
        temp->next=curr;
        curr=temp;
        temp=nxt;
    }
    return curr;
}
