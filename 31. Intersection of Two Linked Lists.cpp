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

Node* findIntersection(Node *a, Node *b)
{
    //Write your code here
    if(!a || !b)
    return NULL;
    Node *x=a,*y=b;
    while(x!=y)
    {

        if(!x)
        {
            x=a;
        }
        else
        x=x->next;
        if(!y)
        {
            y=b;
        }
        else
        y=y->next;
    }
    return x;
}
