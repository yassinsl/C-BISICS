#include <stdio.h>
 struct yassin 
    {
        int a;
        char c[10]
    };
int main (void)
{
    struct yassin s1 ={10,"yassin"};
    struct yassin *ptr = &s1;
printf("a = %d\n",s1.a);
printf("c = %s\n",ptr -> c);
}