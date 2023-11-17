#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char c[10];
    char *ptr;
   int i, leng;

    printf ("please enter long of array:");
    scanf("%d",&leng);
    printf("please enter the string :");
    scanf("%s", c);
    ptr = (char*)malloc(leng * sizeof(char));
    if (ptr == NULL)
    {
        printf("error: memory allocation\n");
        exit(1);
    }
    else
    {
        for(i = 0 ; c[i]&& i < leng; i++)
        {
            printf("%c", c[i]);
        }
    }
    printf("\n");
    free(ptr);
    return 0;
}