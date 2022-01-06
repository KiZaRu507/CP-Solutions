#include<iostream>
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node*&head,int val){
    node*temp=head;
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    while(temp->next!=NULL){  
        temp=temp->next;
    }temp->next=n;
}
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        std::cout<<temp->data<<"->";
        temp=temp->next;
    }std::cout<<"NULL";
}
void insertatbegin(node*&head,int val){
    node*temp= new node(val);
    if(head==NULL){
        head=temp;
        head->next=NULL;
        
    }else{temp->next=head;
    head=temp;}
} 
int main(){
    node*head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertatbegin(head,4);
    insertattail(head,3);
    display(head);

    return 0;
}
