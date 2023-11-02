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
void sortList(node *head)
{
    int count[3] = {0, 0, 0}; // Initialize count of '0', '1' and '2' as 0
    node *ptr = head;
 
  
    while (ptr != NULL)
    {
        count[ptr->data] += 1;
        ptr = ptr->next;
    }
 
    int i = 0;
    ptr = head;
 
   
    while (ptr != NULL)
    {
        if (count[i] == 0)
            ++i;
        else
        {
            ptr->data = i;
            --count[i];
            ptr = ptr->next;
        }
    }
}
int main(){
    node* head=NULL;
    insertattail(head,2);//2 1 2 1 1 2 0 1 0
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,1);
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,0);
    insertattail(head,1);
    insertattail(head,0);
    display(head);
    sortList(head);
    cout<<"displaying the sorted list"<<endl;
    display(head);
}