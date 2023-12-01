#include <stdio.h>
int main (void)
{
    int a[10],size,i,j,pozition,b;
    
    printf("pleas enter the size of the array :");
    scanf("%d",&size);
    printf("please enter the elements of the array :\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("please enter the number :");
    scanf("%d",&b);
    printf("please the possition :");
    scanf("%d",&pozition);
    
    for (i = size - 1; i >= pozition - 1; i--)
     {
        a[i + 1] = a[i];
        
     }
     a[pozition - 1 ] = b;
     size++;
    printf("the elementd of  the array are :\n");
     
     for (i = 0; i < size; i++)
     {
        printf("%d ", a[i]); 
     }
     printf("\n");
     return (0);
}
