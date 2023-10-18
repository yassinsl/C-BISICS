#include <stdio.h>
#define MAX 100
int main (void)
{
    int a[MAX],arr2[MAX];
    int i, elements,b = 0;
    
    printf("please enter the number of elements :");
    scanf("%d",&elements);
    printf("the number of elements is : %d\n",elements);

    for (i = 0 ; i < elements; i++)
    {
        printf("element-%d :",i);
        scanf("%d",&a[i]);
    }
    printf("the elements of array 1 are :");
    for (i = 0 ; i < elements; i++)
    {
        printf("%d ", a[i]);
        arr2[i] = a[i];
    }
    printf("\n");
    printf("the elements of array 2 are :");
    for (i = elements - 1 ; i >= 0; i--)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return(0);
}