#include <stdio.h>
int main (void)
{
    int a, b, sum = 0;;
    a = 0; 
    printf("PLEASE Enter natural numbers :");
    scanf("%d",&b);
    if (b < 0)
    {
        printf("please enter positive numbers\n");
    }
    else
    {
        while (a <= b)
        {
            sum = sum + a;
            a++;
        }
        printf("Sum of natural numbers is: %d\n", sum);
    }
    return (0);
}