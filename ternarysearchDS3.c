#include<stdio.h>
main()
{
    printf("enter the number of elements of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            t=a[i];
            if(a[i]>a[i+1])
            {
                a[i]=a[i+1];
                a[i+1]=t;

            }
        }
    }
    while
    start=0;
    end=n-1;
    mid1=start+(n-1)/3;
    mid2=mid1+(n-1)/3;
}
