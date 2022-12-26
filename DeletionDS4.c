#include<stdio.h>
void main()
{
    int a[100],n,i,p;
    printf("enter the no. of elements of an array");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position you want to delete");
   {

    scanf("%d",&p);
    }if (p>n+1)
       {

        printf("deletion is not possible");
   } for(i=p-1;i<n-1;i++)
       {
           a[i]=a[i+1];
       }
        printf("required array");
        for(i=0;i<n-1;i++)
          {

            printf("%d\n",a[i]);
          }
}
