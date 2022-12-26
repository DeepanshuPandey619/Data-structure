#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *l;
struct node *r:
    };
    struct node *getnode()
    {
        struct node *NEW;
        NEW=(struct node*)malloc(sizeof(struct node));
        NEW->l=NULL;
        NEW->r=NEW;
    };
struct node *createnode(int value)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=value;
    p->l=NULL;
    p->r=NULL;
    return p;
};
main()
{
    int ch;
    int n
    printf("opertaions you want to perform on trees");
    ans=getche();
    while(ans=='y')
    {

        printf("\n:createnode\n:add more node\n");
        printf("\n:Enter your choice");
        scanf("%d",&ch);
        switch (ch)
        {

            case 1:
                printf("Enter the value of node");
                scanf("%d",&n);
                p=creatnode(n);
                break;
            case 2:
                if(p->l==NULL && p->r==NULL)
                {

                    printf("want to enter in left child or right child: l or r");
                    ans1=getche();
                    printf("Enter your choice):

                }

        }
    }
}


