
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *l;
    struct node *r;
};

struct node *create_node(int value)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->l = NULL;
    p->r = NULL;
    return p;
}
void preorder(struct node *n1)
{
    if (n1 != NULL)
    {
        printf("%d\n", n1->data);
        preorder(n1->l);
        preorder(n1->r);
    }
}
void postorder(struct node *n1)
{
    if (n1 != NULL)
    {
        preorder(n1->l);
        preorder(n1->r);
        printf("%d\n", n1->data);
    }
}
void inorder(struct node *n1)
{
    if (n1 != NULL)
    {
        preorder(n1->l);
        printf("%d\n", n1->data);
        preorder(n1->r);
    }
}

void main()
{
    struct node *n1, *n2, *n3, *n4;
    n1 = create_node(1);
    n2 = create_node(2);
    n3 = create_node(3);
    n4 = create_node(4);

    n1->l = n2;
    n1->r = n3;
    n2->l = n4;
    inorder(n1);
}
