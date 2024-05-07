#include <stdio.h>
int main (void)
{
    int a[10];
    int element,i;
    printf("please enter  number the elements in the array : ");
    scanf("%d", &element);
    printf("number the elements in the array is %d\n",element);
    
    for (i = 0; i < element; i++)
    {
        printf("a[%d] =",i + 1 );
        scanf("%d",&a[i]);
    }
    printf("Elements in array are :");
    for( i = 0; i < element; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return (0);
}