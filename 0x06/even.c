#include <stdio.h>
void even (int a);
int main (void)
{
    int num;
        printf("Please enter the  number :");
        scanf("%d", &num);
        even (num);


}
void even (int a)
{
    if (a % 2 == 0)
        printf("this number  %d is even.\n", a);
    else
    printf("this number  %d is odd.\n", a);
}