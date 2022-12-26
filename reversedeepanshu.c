#include <stdio.h>
void main()
{
    int n,a,b,c,d,e;
    int r;
    printf("\nEnter the five digit number (less than 32767):");
    scanf("%d",&n);
    e = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    a = n%10;
   r = e*10000 +d *1000 +c *100 +b *10 +a;
    printf("The reverse number is %d\n",r);

}
