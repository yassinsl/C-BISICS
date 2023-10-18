#include <stdio.h>
int main (void)
{
     int a[10];
    int element,i, b;
    printf("please enter  number the elements in the array : ");
    scanf("%d", &element);
    printf("number the elements in the array is %d\n",element);
    for(i = 0; i <element; i++)
    {
        printf("element-%d :",i);
        scanf("%d",&a[i]);
    }
    printf("Element to search is :");
    scanf("%d",&b);
    for(i =0 ; i <= element ; i++)
    {
        if(a[i] == b)
        {
            printf(" Element found at index : %d\n",i);
        }
    } 
    return(0);
}