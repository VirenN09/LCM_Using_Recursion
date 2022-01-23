#include <stdio.h>
#include <stdlib.h>
lcm(int,int);
int main()
{
   int a,b,result;
   int prime[100];
   printf("Enter 2 Numbers: ");
   scanf("%d%d",&a,&b);
   result=lcm(a,b);
   printf("LCM of %d and %d is %d",a,b,result);
   return 0;

}
lcm(int a,int b)
{
    static int c = 1;

    if (c % a==0 && c % b==0)
    {
         return c;
    }


     c++;
     lcm(a,b);
     return c;

}
