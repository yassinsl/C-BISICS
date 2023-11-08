#include <stdio.h>
int fibonacci (int x);
int main(void)
{
    int a,b;
    printf("please enter the number :");
    scanf("%d", &a);
    b = fibonacci(a);
    printf("%dth Fibonacci term: %d\n",a,b);

}
int fibonacci (int x)
{
    int s;
    s = 0;
    if(x >= 0)
    {
        s = x + fibonacci(x - 1);
        printf("%d\n",s);
    }
    else
    {
        return 0;
    }
    return s;
}