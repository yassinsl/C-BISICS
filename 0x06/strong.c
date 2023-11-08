#include <stdio.h>
int factorial (int a);
void strong (int num1,int num2);
int main (void)
{
int num1,num2;
    printf("please enter number 1 : ");
    scanf("%d",&num1);
    printf("please enter number 2 : ");
    scanf("%d",&num2);
    strong(num1,num2);
    return 0;
}
void strong (int num1,int num2)
{
    int i,start,end,m,c;
    for( i =num1; i <=num2; i++)
    {
        start = i / 100;
        c =(i % 100);
        m = c /10;
        end = c % 10;
        if(i > 0 && i < 10)
        {
            if(factorial(i)== i)
            printf("%d\n",i);
        }
        if(factorial(start) + factorial(end) + factorial(m) == i)
        {
            printf("%d\n",i);
        }
    }
}
int factorial (int a)
{
    int i,fact = 1;
    for (i = a; i > 0; i--)
    {
        fact *= i;
    }
    return (fact);
}