#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a;
    int *ptr = NULL;
    ptr = (int*) malloc (sizeof (a));

    printf("please enter the number :");
    scanf ("%d", ptr);
    if(ptr == NULL)
        printf("error\n");
        else
            {
                printf ("a = %d\n", *ptr);
                printf ("add = %p\n", ptr);
            }
        free (ptr);
        return 0;
}