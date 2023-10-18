#include <stdio.h>

int main(void) {
    int arr1[10];
    int arr2[10];
    int sumarr[10];
    int element, i, j, b = 0;
    printf("Please enter the number of elements in the array: ");
    scanf("%d", &element);
    printf("The number of elements in the array is %d\n", element);

    for (i = 0; i < element; i++) 
    {
        printf("Element-%d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("This is  elements  the array 1 is :"); 
    for (i = 0; i < element; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < element; i++) 
    {
        printf("Element-%d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
     printf("This is  elements  the array 2 is :"); 
    for (i = 0; i < element; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for (i = 0; i < element; i++)
    {
        sumarr[i] = arr1[i] + arr2[i];
    }
    printf("the sum of 2 array is :");
    for (i = 0; i < element; i++)
    {
      printf("%d ",sumarr[i]);
    }
    printf("\n");
return (0);
}