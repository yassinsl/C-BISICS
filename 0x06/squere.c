#include <stdio.h>
void array(int *a, int b,int (*s)(int ));
 int  square(int n);
int main (void)
{
    int a[10],b;
    printf("please enter number of element to array : ");
    scanf("%d",&b);
     if ( b <= 10) {
        array(a,b,square);
    } else {
        printf("Array size exceeds the maximum limit (10).\n");
    }
 return 0;
}
void array(int *a, int b, int (*s)(int ))
{
    int i;

    for(i = 0; i < b; i++)
    {
        printf("element-%d :", i);
        scanf("%d",&a[i]);
    }
    printf("element the array are :\n");
    for(i = 0; i < b; i++)
    {
        printf("%d ",a[i]);
    }
printf("\n");
    for(i = 0; i < b; i++)
    {
         a[i] =  s(a[i]);
          printf("%d ", a[i]);
    }
printf("\n");
}
int square(int n)
{
    return n * n;
}