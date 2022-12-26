#include<stdio.h>
void main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    printf("a\tb\ta.b\ta+b\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t%d\t%d\t%d\n",i,j,i&&j,i||j);

        }

    }

}
