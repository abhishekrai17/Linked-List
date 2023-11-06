#include<iostream>
using namespace std;
class node{
    public:
       int data;
       node* next;
       node* ptr;
    node(int val){  //node here is a constructor 
        data =val;
        next=NULL;
        ptr=NULL;
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
void sort1(node* &head){
    node* temp=head;
    while (temp!=NULL)
    {
        node* n=temp->next;
       while (n!=NULL)
       {
        if((temp->data ) > ( n->data)){
            int q=temp->data;
            temp->data=n->data;
            n->data=q;
        }
        n=n->next;
       }
     temp=temp->next;  
    }
    
}

 
void display(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp =temp->next;
    }
    
}
int main(){
node* head =NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertattail(head,6);
insertattail(head,4);
insertattail(head,7);
insertattail(head,5);
display(head);
sort1(head);
cout<<"the sorted list is "<<endl;
display(head);

}