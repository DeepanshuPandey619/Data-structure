#include<stdio.h>
void main()
{
    int a[100],i,n,p,v;
   printf( "enter the no. of elements in the array ");
   scanf("%d",&n);
   printf("enter the elements of the array");
   for(i=0;i<=n;i++)
   scanf("%d",&a[i]);
   printf("enter the position of an element you want to enter");
   scanf("%d",&p);
   printf("enter the value of an element you want to enter");
   scanf("%d",&v);
   for(i=n-1;i>=p-1;i--)
    a[i+1]=a[i];
   a[p]=v;
   printf("resultant array is ");
   for(i=0;i<=n;i++)
    printf("%d",a[i]);
}
