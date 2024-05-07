#include <stdio.h>
int main (void)
{
    int i;
    printf("please enter the number :");
    scanf("%d", &i);
    switch (i > 0)
    {
        case 0:
            printf("%d is negative \n",i);
            break;
        case 1 :
        printf("%d is positive \n",i);
            break;

    }
    return (0);
}