#include <stdio.h>

int main(void) {
    int a[100];
    int element, i, j, even,odd;
    printf("Please enter the number of elements in the array: ");
    scanf("%d", &element);
    printf("The number of elements in the array is %d\n", element);

    for(i = 0 ; i <element; i++)
    {
        printf("element-%d :",i);
        scanf("%d",&a[i]);
    }
    printf("The odd elements are :\n");
    for(i = 0 ; i <element; i++)
    {
        if(a[i] % 2 != 0)
        {
           printf("%d ",a[i]);
        }
    }
       printf("\nThe Even elements are :\n");
    for(i = 0 ; i <element; i++)
    {
         if(a[i] % 2 == 0)
        {
            printf("%d ",a[i]);
        }  
    }
    printf("\n");
    return(0); 
}