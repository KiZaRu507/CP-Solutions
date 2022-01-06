#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;

};
struct node*head=NULL;
struct node * last=NULL;struct node * head2=NULL;struct node *last2=NULL;
void insert(int data){
    if(head==NULL){
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=temp;
        head=temp;
        last=temp;
        return;
    }
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    last->next=temp;
    temp->next=head;
    head=temp;

}
void display(){
    if(head==NULL){
        printf("EMpTY LL");
        return;
    }
    struct node * temp=head;
    while(temp->next!=head){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    
}
void split(){
    int split;
    scanf("%d",&split);
    struct node * prev=NULL;
    int c=0;
    struct node *temp=head;
    while(temp->next!=head){
        c++;
        if(c==split){
            prev=temp;
        
        }
        temp=temp->next;
    }
    prev->next=head;
    last->next=temp;
    head2=prev->next;
    last2=prev;   
}
int main(){
    int ch,item;
    for(;;){
    printf("1.Insert\n2.Display\n3.Split");scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter the data\n");
        scanf("%d",&item);
        insert(item);
        break;
        case 2:
        display();
        break;
        case 3:
        split();
        display();
        display();
        break;
        default:exit(0);
    }
    }


}
