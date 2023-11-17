#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *file = NULL;
    FILE *file1 = NULL;
    FILE *file2 = NULL;
    char c,b;
    file = fopen("file1.txt", "r");
    file1 = fopen("file2.txt", "r");
    file2 = fopen("file3.txt", "w");
    if (file == NULL  || file1 == NULL || file2 == NULL)
    {
        printf("not found file\n");
        exit(1);    
    }
    while((c = fgetc(file)) != EOF)
    {
        fprintf(file2, "%c", c);
    } 
    while((c = fgetc(file1)) != EOF)
    {
        fprintf(file2, "%c", c);
    } 
    fclose(file);
    fclose(file1);
    fclose(file2);
}