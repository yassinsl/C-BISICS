#include <stdio.h>
void avrege (int *a,int n);
int main (void)
{
int i,a[10],b;
    printf("please enter number of array :");
    scanf("%d",&b);
    for (i =0; i < b; i++)
    {
        printf("element-%d :",i);
        scanf("%d",&a[i]);
    }
    avrege(a,b);
}
void avrege (int *a,int n)
{
    int i, j,sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    j = sum / n;
    printf ("avrege %d\n",j);
}