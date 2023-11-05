#include<iostream>
using namespace std;
class node{
    public:
       int data;
       node* next;
    node(int val){  //node is a constructor here
        data =val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
    node* n= new node(val);
    if(head == NULL){
        head =n;
        return;
    }
    node* temp =head;
    while(temp->next != NULL){
        temp =temp->next;
    }
    temp->next=n;
}
node* reverse(node* &head){
    node* prv =NULL;
    node* curr =head;
    node* nxt;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prv;
        prv=curr;
        curr=nxt;

    }return prv;


    
}
void display(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp =temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
node* head =NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
display(head);
node* newhead=reverse(head);
display(newhead);

}