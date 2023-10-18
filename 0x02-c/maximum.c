#include <stdio.h>
int main (void)
{
    int a;
    printf("enter the number: ");
    scanf ("%d", &a);
    switch(a % 2)
    {
    case 0 : 
    printf("%d is even number\n",a);
    break;
    case 1 :
    printf("%d is odd number\n",a);
    break;
}
return (0);
}