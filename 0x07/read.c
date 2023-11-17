#include <stdio.h>
int main (void)
{
    FILE *file = NULL;
    char a,b[100];
    file = fopen("y.txt", "r");
    if (file == NULL)
    {
        printf("not found the file \n");
        exit(1);
    }
        while(!feof(file))
        {
            a = fgetc(file);
            printf("%c",a);
        }
        printf("\n");
        fgets(b,5,file);
         printf("%s\n",b);
        fclose(file);
}