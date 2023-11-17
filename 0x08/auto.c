#include <stdio.h>
void  number(void);
int a = 100;
int main (void)
{
    //int a = 10;
     number();
    {
        int a = 20;
        printf("a = %d\n", a);
    }
    {
    printf("a = %d\n", a++);
    }
    printf("a = %d\n", a);
}
void  number(void)
{
    int a = 11;
    printf("a = %d\n", a);
}