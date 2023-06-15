/****************************************************************

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


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    Node* onex=head, *twox=head;
    while(onex!=NULL && twox!=NULL && twox->next!=NULL)
    {
        onex=onex->next;
        twox=twox->next->next;
        if(onex==twox)
        break;
    }
    if(twox==NULL || twox->next==NULL)
    return NULL;
    Node* ans=head;
    while(ans!=onex)
    {
        ans=ans->next;
        onex=onex->next;
    }
    return ans;
}
