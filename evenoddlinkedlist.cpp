//Even and odd separate in linked list
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


void insertathead(node*&head,int data){
    node *n =new node(data);
  
   n->next=head;
    head=n;
    
}

node* checkevenodd(node*& head){
    node* temp=head;
    node* head1=NULL;
    while (temp->next!=NULL)
    {
        if((temp->data)%2==0){
            insertathead(head1,temp->data);
        }
        else{
            insertattail(head1,temp->data);
        }
        temp=temp->next;
    }
    return head1;
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
   node * a= checkevenodd(head);
   cout<<"displaying even and odd separate "<<endl;
    display(a);
  
}