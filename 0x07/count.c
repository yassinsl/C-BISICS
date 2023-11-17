#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    FILE *file = NULL;
    char c;
    int a = 1,b = 1,d = 0;
    file = fopen("count.txt", "r");

    if (file == NULL)
    {
        printf("Error: Could not open\n");
        exit(1);
    }
    else
    {
        while ( (c =fgetc(file)) != EOF)
        {
              d++;
            if(c == ' ' || c == '\t')
                a++;
            else if(c == '\n')
            {
                a++;
                b++;
            }
           
        }
        printf("Total characters =%d\n",d);
        printf("Total words =%d\n",a);
        printf("Total lines =%d\n",b);
    }
    fclose(file);
}