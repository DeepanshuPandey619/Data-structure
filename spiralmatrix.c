include<stdio.h>
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
            printf("%d",a[0][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][])
        }

