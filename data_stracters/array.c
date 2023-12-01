#include <stdio.h>
int main (void)
{
    char b[10]= "hello";
    int a[4]= {0,1,2,4};
    
    printf("%s\n", b);
    printf("%d\n", a[3]);
    for(int i=0; i<=6;i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}