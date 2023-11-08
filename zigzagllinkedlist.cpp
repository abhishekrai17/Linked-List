//Zigzag list in linked list
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
void zigZagList(node* head)
{
    
    bool flag = true;
  
    
    node* current = head;
    while (current->next != NULL) {
        if (flag) 
        {
           
            if (current->data > current->next->data)
                swap(current->data, current->next->data);
        }
        else 
        {
           
            if (current->data < current->next->data)
                swap(current->data, current->next->data);
        }
  
        current = current->next;
        flag = !flag; 
    }
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
    zigZagList(head);
    cout<<"Printing the zig zag list"<<endl;
    display(head);
}
