#include <stdio.h>
int sum (int x);
int main (void)
{
    int a,c;

    printf("please enter the number : ");
    scanf("%d", &a);
    c =sum(a);
    printf("this is the sum of the number  : %d\n", c);
        return 0;
}
int sum (int x)
{
    int s = 0;
    if(x != 0)
    {
        s = x % 10 + sum(x/10); 
    }
    return s;
}