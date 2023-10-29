/* C++ Program to remove duplicates in an unsorted
   linked list */
#include <bits/stdc++.h>
using namespace std;
 class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
 };
void insertattail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        head=n;
        return ;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
/* Function to remove duplicates from a
   unsorted linked list */
void removeDuplicates( node* &head)
{
     node *ptr1, *ptr2, *dup;
    ptr1 = head;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) {
                /* sequence of steps is important here */
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
 
/* Function to print nodes in a given linked list */
void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}
 
// Driver code
int main()
{ node* head=NULL;
insertattail(head,10);
insertattail(head,12);
insertattail(head,11);
insertattail(head,11);
insertattail(head,12);
insertattail(head,11);
insertattail(head,10);
display(head);
removeDuplicates(head);
cout<<"Displaying after removing duplicates"<<endl;
display(head);
}