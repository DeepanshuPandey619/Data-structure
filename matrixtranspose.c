#include<stdio.h>
int main()
{
    int a[20][20],i,j,m,n,temp;
    printf("enter rows and columns");
    scanf("%d %d",&m,&n);
    printf("enter the matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
}
