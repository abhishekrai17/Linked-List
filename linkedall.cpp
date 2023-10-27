#include <iostream>
using namespace std;
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


// insertion of node at tail
void insertattail(node *&head, int val)
{
    node *n = new node(val);
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


// creating a loop in a linked list
void createloop(node *&head)
{
    node *kth;
    int count = 1;
    node *temp = head;
    while (temp->next != NULL)
    {
        if (count == 3)
        {
            kth = temp;
        }
        count++;
        temp = temp->next;
    }
    temp->next = kth;
}



// detect of a cycle in a linked list
bool detect(node* &head)
{
    node *slow=head;
    node *fast=head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
         if (fast == slow)
    {
        return true;
    }
    }
   
    return false;
}





// main function
int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    display(head);
    // node *a = reverse(head);
    // display(a);
    createloop(head);
    bool b = detect(head);
    cout << "the linked list has a cycle is " << b << endl;
}