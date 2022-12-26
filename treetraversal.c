#include <stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node*l;
    struct node*r;

};
struct node* createnode(int value){
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->l=NULL;
    p->r=NULL;
    return p ;

}
void preOrderTraversal(struct node *p){
    if(p!=NULL){
        printf("\t%d",p->data);
        preOrderTraversal(p->l);
        preOrderTraversal(p->r);
    }
}
void postOrderTraversal(struct node *p){
    if(p!=NULL){
        postOrderTraversal(p->l);
        postOrderTraversal(p->r);
        printf("\t%d",p->data);
    }
}
void inOrderTraversal(struct node *p){
    if(p!=NULL){
        inOrderTraversal(p->l);
        printf("\t%d",p->data);
        inOrderTraversal(p->r);
    }
}
void main()
{
    struct node *n1,*n2,*n3,*n4,*n5;
    n1=createnode(2);
    n2=createnode(4);
    n3=createnode(5);
    n4=createnode(6);
    n1->l=n2;
    n1->r=n3;
    n3->l=n4;
    printf("\nPre Order Traversal: ");
    preOrderTraversal(n1);
    printf("\nPost Order Traversal: ");
    postOrderTraversal(n1);
    printf("\nIn Order Traversal: ");
    inOrderTraversal(n1);
}
