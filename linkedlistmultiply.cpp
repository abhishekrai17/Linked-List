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

int var(node* &head){
    int count=0;
    node* temp=head;
    while (temp!=NULL)
    {
        count=count*10 +temp->data;
        temp=temp->next;
    }
    return count;
}
int main()
{
    node *head = NULL;
    insertattail(head, 9);
    insertattail(head, 4);
    insertattail(head, 6);
  
    node *head1 = NULL;
    insertattail(head1, 8);
    insertattail(head1, 4);
   
    cout<<"displaying the first linked list"<<endl;
    display(head);
    cout<<"displaying the second linked list"<<endl;
    display(head1);
    int a= var(head);
    int b=var(head1);
    int res= a*b;
    cout<<"the result is "<<res<<endl;
    
}