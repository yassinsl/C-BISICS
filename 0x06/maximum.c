#include <stdio.h>
void max (int x, int y);
 int main (void)
 {
    int a, b;
    printf("please enter  two numbers :");
    scanf("%d %d", &a, &b);
    max(a,b);
    return (0);
 }
 void max (int x, int y)
{
    if (x < y)
    {
        printf("the maximum number is %d\n", y);
        printf("the minimum number is %d\n", x);
    }
    else if (x > y)
        {
            printf("the maximum number is %d\n", x);
            printf("the minimum number is %d\n", y);
        }
        else{
            printf("%d and %d are  equal\n", x, y);
        }
}