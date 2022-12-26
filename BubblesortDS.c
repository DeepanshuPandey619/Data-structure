#include<stdio.h>
void main()
{

    int i,j,n,a[100],t;
    printf("no. of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
