#include <stdio.h>
int main (void)
{
int a[10];
int i,element,j,b = 0;
printf("please enter  number the elements in the array : ");
    scanf("%d", &element);
    printf("number the elements in the array is %d\n",element);
    for (i = 0; i <= element-1 ; i++)
        {
            printf("a[%d] : ", i + 1);
            scanf("%d",&a[i]);
        }
           for (i = 0; i <= element - 1 ; i++)
           {
             for (j = 0; j <= element - 1 ; j++)
             {
            if (a[i] == a[j])
            {
            b++;
            break;
            }
            }
           }
           printf(" Total number of duplicate elements found in the array is %d\n",b);
return(0);
}