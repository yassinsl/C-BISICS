#include <stdio.h>
int main (void)
{
    FILE *file = NULL;
    char a[100];

    file = fopen("text.txt", "a");
    printf("please enter the string :");
    gets(a);
    fprintf(file, "\n%s\n",a);

    fclose(file);
}