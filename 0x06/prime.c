#include <stdio.h>
void prime(int x, int y);
int main (void)
{
int a ,b;
    printf(" please enter lower limit :");
    scanf("%d",&a);
    printf(" please enter uper limit :");
    scanf("%d",&b);
    prime(a,b);
}
void prime(int x, int y)
{
int i;
if (x > y)
{
    printf("error\n");
}
else
{
    for (i = x; i <= y  ; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            printf("%d ", i);
            if (i != y) 
            printf(" , ");
        }
    } 
    printf("\n");
}
}