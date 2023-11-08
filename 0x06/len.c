#include <stdio.h>
#include <string.h>

void de(int *p , int *q);
int i =0,j = 1;
int main (void)
{
 de(&i,&j);
 printf("%d %d\n",i,j);
int a = 100;

}
void de(int *p , int *q)
{
    p = q;
    *p = 2;
}
