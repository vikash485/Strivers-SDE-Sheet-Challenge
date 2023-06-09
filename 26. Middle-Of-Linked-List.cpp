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

Node *findMiddle(Node *head) {
    // Write your code here
    int n=1;
    Node* temp=head;
    while(temp->next)
    {
        n++;
        temp=temp->next;
    }
    int cnt=n/2;
    temp=head;
    while(cnt--)
    {
        temp=temp->next;
    }
    return temp;
}

