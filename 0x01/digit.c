#include <stdio.h>
/*
Author:YASSIN LAHSSINI
Date:10/09/2023
Time: 12:00
Program: Character Classification
*/
int main (void)
{
    char a;

    printf ("Enter only character please :");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z' || a >= 'A' && a<= 'z')
        printf("%c is alphabet\n",a);
    else if (a>='0' && a <= '9')
        printf ("%c is a degit \n",a); 
    else 
        printf("%c is special symbol character\n",a );
return 0;
}
