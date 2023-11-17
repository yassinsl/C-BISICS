#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[] = "Learning C programming at Codeforwin is simple and easy.";
    char a;
    FILE *f = NULL;
    
    f = fopen("pro.txt", "a");

    if (f == NULL) {
        printf("File not found or cannot be opened.\n");
        exit(1);
    }
    else {
        fprintf(f,"%s\n", str);
        fclose(f);
    }
    f = fopen("pro.txt", "r");

    while ((a = fgetc(f)) && a != EOF) 
    {
        printf("%c", a);
    }
    printf("\n");
    fclose(f); // Close the file when you're done with it.
    return 0;
}