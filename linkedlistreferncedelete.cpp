//Given only a pointer/reference to a node to be deleted in a singly linked list, how do you delete it?
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void ref(node *&ptr)
{
    ptr->data = ptr->next->data;
    ptr->next = ptr->next->next;
}
int main()
{
    node *head = new node(5);
    head->next = new node(1);
    node *ptr = head->next->next = new node(2);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(4);
    display(head);
    ref(ptr);
    cout << "Displaying after removing" << endl;
    display(head);
}
