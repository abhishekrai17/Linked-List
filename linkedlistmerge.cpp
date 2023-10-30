//merging of two linked list
#include <iostream>
using namespace std;
// declaration of node
class node
{
public:
    int data;
    node *next;
    node(int val)
    { // node here is a constructor
        data = val;
        next = NULL;
    }
};

void insertattail(node *&head, int data)
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

// display of linked list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

// merging two linked lists
node *merge(node *&head, node *&head1)
{
    node *n = NULL;
    node* temp=head->next;
    node* temp1=head1->next;
    while (temp->next != NULL && temp1->next != NULL)
    {

        if (temp->data < temp1->data)
        {
            int a=temp->data;
            insertattail(n, a);
        }
        else if (temp->data > temp1->data)
        {
             int b=temp1->data;
            insertattail(n, b);
        }
    }
    return n;
}

int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 12);
    insertattail(head, 3);
    insertattail(head, 14);
    insertattail(head, 5);
    node *head1 = NULL;
    insertattail(head1, 11);
    insertattail(head1, 2);
    insertattail(head1, 13);
    insertattail(head1, 4);
    insertattail(head1, 15);
    cout<<"displaying the first linked list"<<endl;
    display(head);
    cout<<"displaying the second linked list"<<endl;
    display(head1);
    cout<<"displaying the merged list"<<endl;
    node *a = merge(head, head1);
    display(a);
}