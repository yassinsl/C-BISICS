#include <stdio.h>
//auto int a = 10; error 
int main(void)
{
    auto int a = 11;
    printf("%d\n", a);
    {
        auto int a = 20;
    }
    a++;
     printf("%d\n", a);
         return 0;
