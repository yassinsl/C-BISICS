#include<stdio.h>
enum yassin
{
    cdd,
    html,
    css,
    javascript,
};
enum yassin1
{
    c,
    java,
    python,
    yassin,
};
int main (void)
{
    enum yassin1 var;
    printf("size of enum is %d\n", sizeof(var));
    return(0);
}