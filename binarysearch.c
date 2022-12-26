#include<stdio.h>
 int main()
 {
     int a[]={2,4,7,9,10,15,16,19,20,30};
     int i,size,f=16,start,end,mid;
     size=10;
     start=0;
     end=size-1;
     mid=(start+end)/2;
     while(start<=end)
     {

         if(a[mid]==f)
         {
             printf(" at index %d\n",mid);
             break;
         }
         else if(f>a[mid])
         {
             start= mid+1;
         }
         else
         {
             end=mid-1;
         }
        mid=(start+end)/2;
     }
     return 0;
 }
