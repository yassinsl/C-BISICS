#include <stdio.h>
#define ML(a,b)  a * b
#define MAX(a,b) do { \
                      if (a > b) \
                          printf("%d is max\n", a); \
                      else if (a < b) \
                          printf("%d is max\n", b); \
                  } while(0)
int main (void)
{
        printf("%d\n",ML((3 + 4),(2+2)));// 28 hh
        printf("%d\n",ML(3 + 4, 2+2));// 14 hh
     MAX(7,6);
}