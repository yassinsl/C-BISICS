#include <stdio.h>
void even(int min,int max);
void odd(int min,int max);
int main (void)
{
    int a,b;
    printf("please enter the  lower number :");
    scanf("%d",&a);
    printf("please enter the  lower number :");
    scanf("%d",&b);
    printf("Even numbers between %d and %d:\n", a, b);
    even(a, b);
    printf("\n");

    printf("Odd numbers between %d and %d:\n", a, b);
    odd(a, b);
    printf("\n");
}

void even(int min,int max)
{
    if(min <= max)
    {
         if(min % 2 ==0)
        {
            printf("%d ",min);
        }
         return even(min + 1,max);
    }
}

void odd(int min,int max)
{
    if(min <= max)
    {
         if(min % 2 !=0)
        {
            printf("%d ",min);
        } 
        return odd(min + 1,max);
    }
}