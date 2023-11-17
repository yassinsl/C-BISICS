#include <stdio.h>
#include <stdlib.h>
int sum (void);
int main (void)
{
    int a = 1,b = 0;

    while(a == 1)
    {
        b = sum();
        a--;
    }
    printf(" b = %d\n", b);
}
int  sum (void)
 {
    int *ptr;
    int sum;

        ptr = (int*)malloc(2 * sizeof(int));
        printf("Enter two numbers separated by a space: ");
       scanf("%d %d", ptr, ptr + 1);

            sum = *(ptr + 0)+*(ptr + 1);
            free(ptr);// Free the allocated memory
        return sum;
 }