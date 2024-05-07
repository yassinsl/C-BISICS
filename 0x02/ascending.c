#include <stdio.h>
#define MAX 100
int main (void)
{
    int a[MAX];
    int i, elements,j;
    
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
    }
    printf("\n");
    printf("Elements of array in sorted ascending order:\n");
    for (i = 0 ; i < elements; i++)
    {
        for (j = i + 1 ; j <elements; j++)
        {
          if(a[i] > a[j])
                {
                    int tmp = a[i];
                    a[j] = a[i];
                    tmp = a[j];
                }
        }
    }
    for (i = 0 ; i < elements; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}