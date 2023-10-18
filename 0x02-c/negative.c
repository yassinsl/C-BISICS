#include <stdio.h>
#define MAX 100
int main (void)
{
    int a[MAX];
    int i, elements,b = 0;
    
    printf("please enter the number of elements :");
    scanf("%d",&elements);
    printf("the number of elements is : %d\n",elements);

    for (i = 0 ; i < elements; i++)
    {
        printf("element-%d :",i);
        scanf("%d",&a[i]);
    }
    for (i = 0; i < elements; i++)
    {
        if (a[i] < 0)
        {
            b++;
        }
    }
    printf("Total number of negative elements : %d\n",b);
    return(0);
}