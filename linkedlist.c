#include<stdio.h>
#include<conio.h>
#define size 10
typedef struct stack //creation of the structure
{
 int top;
 int elt[size];
}stack_type; // you had defined a data type named as stack_type
void init(stack_type *); //for intitialization of your stack
int underflow(stack_type *); // to check the condition of underflow
int overflow(stack_type *); // to check the condition of overflow
int pop(stack_type *); // to delete the elemnt from the stack
void push(stack_type *,int ); //to insert the element into the stack
void display(stack_type *); // to display the content of the stack
void main()
{
 stack_type s; // s is denoting the stack
 int x,op;
 init(&s); // top will be initialzed to -1
 //clrscr();
 do
   {
    printf("\n\nMENU\n1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT");
    printf("\nEnter your choice : ");
    scanf("%d",&op);
    switch(op)
    {
     case 1:printf("\nEnter the number = ");
	    scanf("%d",&x);
	    if(!overflow(&s))
	       push(&s,x);
	    else
	       printf("\nStack is full");
	    break;
     case 2:if(!underflow(&s)) //pop
	      {
	       x=pop(&s);
	       printf("\nPopped element is %d",x);
	      }
	    else
	      printf("\nStack is empty");
	    break;
     case 3:display(&s);
	    break;
    }
   }while(op!=4);
}
void init(stack_type *s)
{
 s->top=-1;
}
int underflow(stack_type *s)
{
 if(s->top==-1)
   return (1);
 else
   return (0);
}
int overflow(stack_type *s)
{
 if(s->top==size-1)
   return (1);
 else
   return (0);
}
void push(stack_type *s,int x)
{
 s->top=s->top+1; // incremeting top by 1
 s->elt[s->top]=x; //insertion of the element
}
int pop(stack_type *s)
{
 int x;
 x=s->elt[s->top];
 s->top=s->top-1;
 return (x);
}
void display(stack_type *s)
{
 int i;
   if(s->top==-1)
 {
   printf("\n stack is empty: no element to dislay");
 }
 else{
   printf("\nStack contains the following elements");
 for(i=s->top;i>=0;i--) //printing loop
    {
     printf("%d ",s->elt[i]);
    }
 }
}
