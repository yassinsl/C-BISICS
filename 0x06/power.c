#include <stdio.h>
int  power (int a,int b);
int main (void)
{
    int num,pow;
    printf("please enter the number :" );
    scanf("%d",&num);
    printf("please enter the power number :" );
    scanf("%d",&pow);
    int a =power(num,pow); 
    printf("power is %d\n",a);
}
int  power (int a,int b)
{
    int s = 0;
    if(b < 0)
  return 1.0 / power(a, -b);
        else if (b == 0) {
        return 1;
    else if(b > 0)
    {
        s = a * power(a, b - 1);
        return s;
    }
}