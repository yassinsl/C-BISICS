#include <stdio.h>
int main (void)
{
     int a[10];
    int element,i,mn,max;
    printf("please enter  number the elements in the array : ");
    scanf("%d", &element);
    printf("number the elements in the array is %d\n",element);
    for(i = 0;i < element;i++)
    {
        printf("element-%d :",i);
        scanf("%d",&a[i]);
    }
    mn = a[0];
    max = a[0];
    for(i = 0; i < element; i++)
    {
        if(a[i] < mn)
        {
           mn = a[i];
        }
       else if(a[i] > max);
        {
           max = a[i];
        }
    }   
    printf("Maximum element is %d\n",max);
    printf("Minimum element is %d\n",mn);
}