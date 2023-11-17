#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    FILE *file = NULL;
    char ch;

        file = fopen("number.txt", "r");
        if (file == NULL)
        {
            printf("Error");
            exit(1);
        }
        else
        {
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        printf("\n");
        }
        fclose(file);
        return 0;
}