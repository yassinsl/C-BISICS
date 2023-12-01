#include <stdio.h>

int main (void)
{
    int a[10] = {0,10,2,3,4,5,670};
    int *ptr = a;

    printf("%d\n",3[a]);
    printf("%d\n",*(a + 1));
    printf("%d\n",*a + 1);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",ptr[i]); // *(ptr + i);
    }
    printf("\n");
    return 0;
}