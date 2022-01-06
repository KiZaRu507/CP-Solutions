//stack implemented using arrays
// #include<stdio.h>
// #include<cstdlib>
// #define maxsize 5
// int top=-1;
// int stack[100];
// void push(int data){
// 	if(top==maxsize-1){
// 		printf("Stack is full");return ;
// 	}
// 	stack[++top]=data;
// } 
// void pop(){
// 	if(top==-1){
// 		printf("Empty stack");return ;
// 	}
// 	top--;
// }
// void display(){
// 	if(top==-1){
// 		printf("Empty stack\n");return ;
// 	}
// 	for(int i=top;i>=0;i--){
// 		printf("%d\n",stack[i]);
// 	}
	
// }

// int main(){
// 	int choice,item;
// 	while(1){
// 		scanf("%d",&choice);
// 		switch(choice){
// 			case 1: scanf("%d",&item);
// 			push(item);break;
// 			case 2:
// 			pop();break;
// 			case 3:
// 			display();break;
// 			default:exit(0);
// 		}
// 	}
// }
//queue implemented using arrays
// #include<stdio.h>
// #include<cstdlib>
// #define maxsize 10
// int f=-1,r=-1;
// int queue[100];
// void insert(int data){
// 	if(f==-1&&r==-1){
// 		f=0;
// 		queue[++r]=data;
// 	}
// 	else if(r-f==maxsize-1){
// 		printf("queue is full");
// 	}
// 	else{
// 		queue[++r]=data;
// 	}
// }
// void del(){
// 	if(f==-1&&r==-1){
// 		printf("queue is empty underflow\n");
// 		return;
// 	}
// 	f++;
// }
// void display(){
// 	if(f==-1&&r==-1){
// 		printf("Queue empty\n");
// 		return;
// 	}int i;
// 	for(i=f;i<=r;i++){
// 		printf("%d\n",queue[i]);
// 	}

// }
// int main(){
// 	int choice,item;
// 	for(;;){
// 		scanf("%d",&choice);
// 		switch(choice){
// 			case 1:scanf("%d",&item);
// 			insert(item);break;
// 			case 2:
// 			del();break;
// 			case 3 :
// 			display();break;
// 			default:exit(0);
// 		}
// 	}
// }
//infix to postfix using stack
// #include<stdio.h>
// #include<cstdlib>
// #include<string.h>
// #include<stdlib.h>
// #include<ctype.h>
// char infix[30],postfix[30];
// char stack[40];
// int top=-1;
// void push(char x){
// 	stack[++top]=x;
// }
// int pop(){
// 	return stack[top--];
// }
// int prior(char x){
// 	int p;
// 	if(x=='('||x=='#')
// 		p=1;
// 	if(x=='+'||x=='-')
// 		p=2;
// 	if(x=='*'||x=='/')
// 		p=3;
// 	if(x=='^'||x=='$')
// 		p=4;
// 	return p;
// }
// int main (){
// 	int i,j=0;
// 	printf("Enter the infix expression");
// 	scanf("%s",infix);
// 	push('#');

// 	for(i=0;i<strlen(infix);i++){
// 		if(isalnum(infix[i]))
// 			postfix[j++]=infix[i];
// 		else if(infix[i]=='(')push(infix[i]);
// 		else if(infix[i]==')'){
// 			while(stack[top]!='(')
// 				postfix[j++]=pop();
// 			pop();
// 		}
// 		else{
// 			while(prior(stack[top])>=prior(infix[i]))
// 				postfix[j++]=pop();
// 			push(infix[i]);

// 		}
// 	}
// 	while(stack[top]!='#')	
// 		postfix[j++]=pop();
// 	postfix[j]='\0';
// 	printf("postfix expression is %s",postfix);




// }
//sparse matrix
// #include<stdio.h>
// #include<ctype.h>
// #include<cstdlib>
// #include<string.h>
// #define SROW 50
// #define MROW 40
// #define MCOL 40
// int main(){
// 	int mat[MROW][MCOL],sparse[SROW][3];
// 	int i,j,nzero=0,mr,mc,elem;
// 	printf("Enter the number of rows:\n");
// 	scanf("%d",&mr);
// 	printf("Enter the number of columns:\n");
// 	scanf("%d",&mc);
// 	printf("Enter the Elements:\n");
// 	for(i=0;i<mr;i++){
// 		for(j=0;j<mc;j++){
// 			scanf("%d",&mat[i][j]);
// 			if(mat[i][j]!=0)
// 				nzero++;
// 		}
// 	}
// 	sparse[0][0]=mr;
// 	sparse[0][1]=mc;
// 	sparse[0][2]=nzero;
// 	int sr=nzero+1;
// 	int s= 1;
// 	for(i=0;i<mr;i++){
// 		for(j=0;j<mc;j++){
// 			if(mat[i][j]!=0){
// 				sparse[s][0]=i+1;
// 				sparse[s][1]=j+1;
// 				sparse[s][2]=mat[i][j];s++;		
// 			}
// 		}
// 	}
// 	for(i=0;i<sr;i++){
// 		for(j=0;j<3;j++){
// 			printf("%d",sparse[i][j]);
// 		}printf("\n");
// 	}
// } 
