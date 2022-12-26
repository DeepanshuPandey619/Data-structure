#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("enter the the no. of elements \n");
    scanf("%d",&n);
    printf("enter the elements \n");
    for(i=0;i<n;i++)
       {

        scanf("%d",&a[i]);
       }
    printf("reverse of an array is \n");
    for (i=n-1;i>=0;i--)
    {
        printf("%d \n",a[i]);
    }
}
