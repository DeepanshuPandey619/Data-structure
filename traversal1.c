#include<stdio.h>
void main()
{
    int a[100];
    int n,i;
    printf("enter the no. of elements \n");
    scanf("%d",&n);
    printf("enter the elements \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }

}
