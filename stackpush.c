#include<stdio.h>
int stack_arr[4];
int top=-1;
void push(int data)
{
    if(top==3)
    {

        printf("OVERFLOW");
    }
    top=top+1;
    stack_arr[top]=data;

}
int pop()
{
    int value;
        if(top==-1)
        {

            printf("underflow");
            exit(1);
        }
        value=stack_arr[top];
        top=top-1;
        return value;

}
void print()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack_arr[i]);
    }
}
int main()
{
    int data;
    push(1);
    push(3);
    push(5);
    push(8);
    data = pop();
    data = pop();
    data = pop();
    print();
    return 0;
}
