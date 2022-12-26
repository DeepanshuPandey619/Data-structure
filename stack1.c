#include<stdio.h>
#include<conio.h>
#define size 10
typedef struct stack
{
 int top;
 int elt[size];
}stack_type;
void init(stack_type *);
int underflow(stack_type *);
int overflow(stack_type *);
int pop(stack_type *);
void push(stack_type *,int );
void display(stack_type *);
void main()
{
 stack_type s;
 int x,op;
 init(&s);
 do
   {
    printf("\n\nMENU\n1)PUSH\n2)DISPLAY");
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
	 case 2:display(&s);
	   {
	       break;
	   }
    }
   }
}
void init(stack_type *s)
{
 s->top=-1;
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
 s->top=s->top+1;
 s->elt[s->top]=x;
}int overflow(stack_type *s)
{
 if(s->top==size-1)
   return (1);
 else
   return (0);
}
void push(stack_type *s,int x)
{
 s->top=s->top+1;
 s->elt[s->top]=x;
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

