#include <stdio.h>
char *display(void);
int main (void)
{
     char *j = display();
     printf("%s\n", j);
}
char* display(void)
{
    char str[] = "yassin lahssini";
    return str;
}