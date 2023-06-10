/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    int carry=0;
    Node* head=new Node(0);
    Node* temp=head;
    while(num1 || num2)
    {
        int val=carry;
        if(num1)
        {
            val+=num1->data;
            num1=num1->next;
        }
        if(num2)
        {
            val+=num2->data;
            num2=num2->next;
        }
        // cout<<val<<endl;
        Node* curr=new Node(val%10);
        carry=val/10;
        temp->next=curr;
        temp=temp->next;
    }
    if(carry>0)
    {
        temp->next=new Node(carry);
    }
    return head->next;
}
