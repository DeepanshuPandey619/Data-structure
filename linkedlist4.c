#include<stdio.h>
struct NODE
{
    int data;
    struct NODE *link;

};
traversal(struct NODE *head)
{
    struct NODE *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }
}
struct NODE* getnode()
{
    struct NODE *NEW;
    NEW=(struct NODE *)malloc(sizeof(struct NODE));
    return NEW;
}
struct NODE* create()
{
    int n;
    struct NODE *start,*temp,*NEW,*NEW1;
    char ans;
    NEW=getnode();
    start=NEW;
    temp=start;
    printf("enter the element to be inserted ");
    scanf("%d",&n);
    NEW->data=n;
    NEW->link=NULL;
    printf("want to enter more elements? : y or n");
    ans=getche();
    while(ans=='y')
    {
        NEW1=getnode();
        if (NEW1==NULL)
        {
            printf("overflow");
        }
        else
        {
            temp->link=NEW1;
            temp=NEW1;
            printf("enter the element");
            scanf("%d",&n);
            NEW1->data=n;
            NEW1->link=NULL;
            printf("want to enter more elements : y or n");
            ans=getche();
        }
    }
    return start;
}
void display(struct NODE *start)
{
    if (start==NULL)
    {
        printf("list is empty ");
    }
    else
    {
        struct NODE *ptr;
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->link;
        }
    }

}
struct NODE *insert(struct NODE *start)
{
    struct NODE *NEW;
    if (start==NULL)
    {
        printf("LIST IS EMPTY");

    }
    else
    {

        NEW=getnode();
        if (NEW==NULL)
        {
            printf("overflow");

        }
        else
        {
            int n;
            printf("enter the element");
            scanf("%d",&n);
            NEW->link=start;
            start=NEW;
            NEW->data=n;
        }

    }
    return start;

}
struct NODE *inserte(struct NODE *start)
{
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct NODE *NEW;
        NEW=getnode();
        if(NEW==NULL)
        {
            printf("OVERFLOW");
        }
        else
        {
            int n;
            struct NODE *ptr;
            ptr=start;
            while(ptr!=NULL)
            {
                ptr=ptr->link;
            }
            printf("enter the number to be insert");
            scanf("%d",&n);
            ptr->link=NEW;
            NEW->data=n;
            NEW->link=NULL;
        }
    }
    return start;
}
struct NODE  *insertk(struct NODE *start)
{
    if (start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct NODE *NEW;
        NEW=getnode();
        if(NEW==NULL)
        {
            printf("overflow");

        }
        else
        {
            int n,m;
            struct NODE *ptr,*ptr1;
            printf("enter the key  element after which you want to insert new element ");
            scanf("%d",&m);
            printf("enter the element to be insert");
            scanf("%d",&n);
            ptr=start;
            while(ptr->data!=m && ptr!=NULL)
            {
                ptr=ptr->link;
            }
            ptr1=ptr->link;
            NEW->data=n;
            ptr->link=NEW;
            NEW->link=ptr1;
        }

    }
    return start;

}
struct NODE *deletefirst(struct NODE *start)
{
    if(start==NULL)
    {
        printf("underflow");

    }
    else
    {
        struct NODE *temp;
        temp=start;
        start=temp->link;
        temp->link=NULL;

    }
    return start;

}
struct NODE *deletelast(struct NODE *start)
{
    if(start==NULL)
    {
        printf("underflow");

    }
    else
    {
        struct NODE *ptr;
        ptr=start;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=NULL;
    }
    return start;
}

main()
{
    struct NODE *start;
    start=NULL;
    int ch;
    char ans;
    printf("want to perform operations of linked list: y or n ");
    ans=getche();
    while(ans=='y'){
    printf("\n1 : create\n2 : display\n3 : insert at starting\n4 : insert at end\n5 : insert after a key value\n6 : delete first node\n7 : delete last node\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            start=create();
            display(start);
            break;
        case 2:
            display(start);
            break;
        case 3:
            start=insert(start);
            display(start);
            break;
        case 4:
            start=inserte(start);
            display(start);
            break;
        case 5:
            start=insertk(start);
            display(start);
            break;
        case 6:
            start=deletefirst(start);
            display(start);
            break;
        case 7:
            start=deletelast(start);
            display(start);
            break;

        default :
            printf("pls enter valid choice");
            break;

    }
    printf("want to perform operations on linked list: y or n ");
    ans=getche();
    }
}
