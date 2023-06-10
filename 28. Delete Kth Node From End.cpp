/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    Node* temp=head;

    int cnt=0;
    while(k--)
    {
        temp=temp->next;
    }
    if(!temp)
    return head->next;
    Node* curr=head;
    while(temp->next)
    {
        temp=temp->next;
        curr=curr->next;
    }
    curr->next=curr->next->next;
    return head;
}
