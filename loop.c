#include <stdio.h>
int main()  {
   int n=6,i,j;
   for(i=1;i<=n;i++)   {
       for(j=0;j<2*i;j++)
           printf("%d",j%2);
           printf(" ");
   }
   return 0;
}
