#include <stdio.h>
#define MAX 100
int main (void)
{
    int a[MAX];
    int i, elements,pos,num,num2;
    
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

    printf("please  enter element to insert: ");
    scanf("%d",&num);
    printf("please  enter position where to inser: ");
    scanf("%d",&pos);
    for (i = element; i >= pos ; i--)
    {
        a[i]==a[i - 1] 
    }
    num = arr[poz - 1];
    element++;
    printf("the elements of ferst array  are :");
    for (i = 0 ; i < elements; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}