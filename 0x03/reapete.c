#include <stdio.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 10:50
Program Description:
This C program allows the user to input an array's size and its elements. 
*/

int main (void)
{
    int a[10];
    int j,i,ele,b;
    printf("Enter the number of elements :");
    scanf("%d",&ele);
    for (i=0; i<ele; i++)
    {
        printf("element-%d : ",i);
        scanf("%d",&a[i]);
    }
    printf("the element of array are :\n");
    for (i=0; i<ele; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("The repeating elements are:\n");
    for (i=0; i<ele; i++)
    {
        for(j = i +1; j < ele; j++)
        {
                if(a[i]==a[j])
                {
                    printf("%d ",a[i]);
                }
        }
    }
    printf("\n");
    return 0;
}



