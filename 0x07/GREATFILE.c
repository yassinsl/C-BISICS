#include <stdio.h>
int main (void)
{
    FILE *GF = NULL;
    GF = fopen("yassin.txt","a");
    if(GF == NULL)
    {
        printf("Not found a file.\n");
    }
    else
    {
        printf("The file yassin.txt created successfully...!!\n");
    }
    fclose(GF);
return (0);
}