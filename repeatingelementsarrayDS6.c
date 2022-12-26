#include<stdio.h>
void main()
{int n;
printf("no. of elements");
scanf("%d",&n);
printf("array");
int a[100],i,j;
for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 for (i=0;i<n;i++)
  {
     for(j=i+1;j<n;j++)

       {
          if(a[i]==a[j])
           {
             printf("repeating elements are %d \n",a[i]);
           }
          else(a[i]!=a[j])
           {
             printf("non repeating array elements are %d \n",a[i]);
           }
       }
  }
}

