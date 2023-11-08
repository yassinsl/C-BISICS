#include <stdio.h>
int even(int min,int max);
int  odd(int min,int max);
int main (void)
{
    int a,b;
    printf("please enter the  lower number :");
    scanf("%d",&a);
    printf("please enter the  lower number :");
    scanf("%d",&b);
    printf(" sum Even numbers between %d and %d: %d\n", a, b,even(a, b));

    printf(" sum Odd numbers between %d and %d:%d\n", a, b, odd(a, b));
   
   
}

int  even(int min,int max)
{
      int c;
    if(min <= max)
    {
         if(min % 2 ==0)
        {
             c = min + even(min + 1 ,max);
        }
        
    }
     return c;
}

int odd(int min,int max)
{
    int c;
    if(min <= max)
    {
         if(min % 2 ==0)
        {
            c = min + odd(min + 1 ,max);
        } 
         return c;
    }
}