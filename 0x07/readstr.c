#include <stdio.h>
int main (void)
{
    FILE *file = NULL;
    char a,b[100];
    int n;
    file = fopen("y.txt", "r");
    if (file == NULL)
    {
        printf("not found the file \n");
    }
       while(!feof(file))
       {
             fgets(b,7,file);
             printf("%s\n",b);
       }

        fclose(file);
}