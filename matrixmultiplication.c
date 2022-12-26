#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],r1,r2,c1,c2,k,i,j;
    printf("enter rows and column for matrix a");
    scanf("%d %d",&r1,&c1);
    printf("enter the matrix a");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter rows and column for matrix b");
    scanf("%d %d",&r2,&c2);
    printf("enter the matrix b");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {

            c[i][j] =

        printf("multiplication is = %d\t",c[i][j]);
        }
    }

}
