#include <stdio.h>

int main (void)
{
    int a[10][10] = {{10,20,24},{5,6,7}};
    int *ptr = a[1];// (*(a + 1))
    printf("%d\n",*ptr);
    return (0);
}