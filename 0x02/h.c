#include <stdio.h>
int main (void)
{
    int a,n,sum = 0;
   for(a = 0 ;a <=100 ; a++)
   {
    printf("please enter a number :");
        scanf("%d",&n);
    if (n == -99)
        break;

    else if(n > 0)
     sum += n;
    
   }
     printf("the sum of the number positive is %d\n",sum);
  return (0);

}