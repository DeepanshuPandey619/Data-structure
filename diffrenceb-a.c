#include<stdio.h>
void main()
{

    int a[100],b[100],i,j,n,m;
    printf("enter the no. of elements of set a");
    scanf("%d",&n);
    printf("enter the elements of set a");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the no. of elements of set b");
    scanf("%d",&m);
    printf("enter the elements of set b");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[j]==a[i])
                continue;

        }
    }printf("%d",b[j]);


}
