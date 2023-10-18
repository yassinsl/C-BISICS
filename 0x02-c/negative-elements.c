#include <stdio.h>
int main (void)
{
     int a[10];
    int element,i;
    printf("please enter  number the elements in the array : ");
    scanf("%d", &element);
    printf("number the elements in the array is %d\n",element);
    for(i = 0 ; i< element; i++)
    {
        printf("element-%d : ",i + 1);
        scanf("%d",&a[i]);
    } 

    printf(" negative elements in array are :");
    for(i = 0; i< element; i++)
    {
        if (a[i] < 0)
        {
            printf("%d",a[i]);
        }
    }
    printf("\n");
}