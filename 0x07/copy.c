#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    FILE *file = NULL;
    FILE *file2 = NULL;
    char c;
    file = fopen("aa.txt", "r");
    file2 = fopen("txt2.txt", "w");

    if (file == NULL || file2 == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    while((c = fgetc(file)) != EOF)
    {
        fprintf(file2, "%c", c);
    }
}