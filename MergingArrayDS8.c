
#include<stdio.h>
void main()
{
    int a[20]={1,3,5,6,8};
    int b[20]={2,4,5,6,8,9};
    int c[20];
    int n1=5,n2=6,i,j,k;
    i=j=k=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<=b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    if(i<n1)
    {
        while(i<n1)
        c[k++]=a[i++];
    }
    else
    {
        while(j<n2)
        c[k++]=b[j++];
    }
    for(i=0;i<k;i++)
    {
    printf("%d \n",c[i]);
    }
}
