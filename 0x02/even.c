#include <stdio.h>
int main (void)
{
    int a, b, sum;
        a = 1;
        sum = 0;

        printf("Enter  even number : ");
        scanf("%d",&b);
        if (b < 0)
        {
            printf("please enter positive numbers\n");
        }
        else 
        {
            while (a <= b)
            {
                if (a % 2 == 0)
                {
                sum += a;
                }
                a++;
            }
            printf("Sum of even numbers between 1 to %d is : %d\n",b ,sum);
        }
 return (0);

}