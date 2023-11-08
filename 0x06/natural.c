#include <stdio.h>
void numbers(int min,int max);
int main (void)
{
    int a,b;
    printf("please enter the  lower number :");
    scanf("%d",&a);
    printf("please enter the  lower number :");
    scanf("%d",&b);
    numbers(a,b);
    printf("\n");
}
void numbers(int min,int max)
{
    if(min < 0)
    {
        printf("Please enter the positive number\n");
    }
    if(min <= max)
    {
         printf("%d ",min);
        return  numbers(min + 1,max);
    }
 
}