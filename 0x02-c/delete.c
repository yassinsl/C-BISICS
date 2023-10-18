#include <stdio.h>
#define MAX 100
int main (void)
{
    int a[MAX],arr2[MAX];
    int i, elements,del = 0;
    
    printf("please enter the number of elements :");
    scanf("%d",&elements);
    printf("the number of elements is : %d\n",elements);

    for (i = 0 ; i < elements; i++)
    {
        printf("element-%d :",i);
        scanf("%d",&a[i]);
    }
    printf("Please enter the position to delete (0 -> n) : ");
    scanf("%d",&del);
     printf("the  elements of array are : ");
    for (i = 0; i < elements; i++)
    {
        if (a[i] == a[del])
        {
            continue;
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
} 