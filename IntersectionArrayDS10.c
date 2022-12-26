
#include<stdio.h>
void main()
{
   int a[100],b[100],i,j,n,m;
   printf("no. of elements in a \n");
   scanf("%d",&n);
   printf("no. of elements in b \n");
   scanf("%d",&m);
   printf("elements in a \n");
   for (i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
 printf("elements in b \n");
   for (i=0;i<m;i++)
   {
       scanf("%d",&b[i]);
   }
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          if(a[i]==b[j])
          {
              printf("%d \n",a[i]);
          }
      }
  }
}
