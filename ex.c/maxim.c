#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 10:00
program : the maximum value
*/
int main (void)
{
    int num1 , num2 ,num3;

    printf ("Enter three numbers : ");
    scanf("%d" "%d" "%d" ,&num1,&num2,&num3);

    if (num1 > num2 && num1 > num2)
    {
        printf ("The maximum of %d , %d and %d is %d\n",num1,num2,num2,num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf ("The maximum of %d , %d and %d is %d\n",num1,num2,num3,num2);
    }    
     else if (num3 > num1 && num3 > num2)
    {
        printf ("The maximum of %d , %d and %d is %d\n",num1,num2,num3,num3);
    }    
    
    
}