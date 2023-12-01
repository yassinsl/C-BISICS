#include <stdio.h>
int main (void)
{
    int a[10],size,i;
    
    printf("pleas enter the size of the array :");
    scanf("%d",&size);
    printf("please enter the elements of the array :\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("the elementd of  the array are :\n");
     for (i = 0; i < size; i++)
     {
        printf("%d ",a[i]);
     }
     printf("\n");
     return (0);
}