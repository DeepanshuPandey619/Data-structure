#include<stdio.h>
main()
{
    int a[30],b[30],i,j,n,m,c=0;
    printf("enter the  number of elements of two sets");
    scanf("%d%d",&n,&m);
    printf("enter the elements of 1 set ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the elements of 2 set");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\n%d",a[i]*b[j]);
            c++;

        }
    }
    printf("\n");
    printf("cardinality is %d",c);

}
