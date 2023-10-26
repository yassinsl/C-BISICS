#include <stdio.h>
int main (void)
{
    int a[100], n, i;
    int *ptr;
    ptr = a;

        printf("please enter number of elements to store in the array :");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("element-%d :",i);
            scanf("%d",ptr);
            ptr++;
        }
         ptr = a;
         printf("the elements of array are :\n");
             for (i = 0; i < n; i++)
        {
            printf("element-%d : %d\n",i,*ptr);
            ptr++;
        }
         ptr = &a[n - 1];// address of last element
         printf("The elements of array in reverse order are :\n");
             for (i = n - 1; i >= 0; i--)
        {
            printf("element-%d : %d\n",i,*ptr);
           ptr--;
        }
        return (0);
}