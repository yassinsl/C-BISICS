#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = NULL;
    FILE *file1 = NULL;
    int a = 0, b = 1;
    char ch,ch1,str[] = "hello world";

    
    file = fopen("txt.txt", "a");
    file1 = fopen("txt1.txt", "a"); 

    if (file1 == NULL || file == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    fprintf(file, "%s\n", str);
    fprintf(file1, "%s\n", str);

 
    rewind(file);
    rewind(file1);


    while ( (ch = fgetc(file)) != EOF && (ch1 = fgetc(file1)) != EOF)
    {
        if (ch != ch1)
        {
            a++;
            break;
        }
    }

    if (a == 1)
    {
        printf("The content is different\n");
    }
    else
    {
        printf("The content is equal\n");
    }


    rewind(file);
    rewind(file1);
  while ( (ch = fgetc(file)) != EOF && (ch1 = fgetc(file1)) != EOF)
    {
        if (ch == ch1)
        {
            b = b + 1;
        }
        else 
            break;
    }
   

    printf("The number of similar characters in the two files is: %d\n", b);

    fclose(file);
    fclose(file1);

    return 0;
}
