//reverse a doubly linked list
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insert(node *&head, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = n;
}
node *reverse(node *&head)
{
    node *pre=NULL;
    node *curr=head;
    node *nex;
   
    while (curr != NULL)
    {
       nex=curr->next;
       curr->next=pre;
       pre=curr;
       curr=nex;
    }
    return pre;
}
void display(node *&head)
{
    node *n = head;
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}
int main()
{
    node *head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    display(head);
    node *a=reverse(head);
    cout<<"the reverse of the linked list is "<<endl;
    display(a);
}