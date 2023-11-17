#include <stdio.h>

int main(void)
{
    printf("date : %s\n",__DATE__);
    printf("TIME : %s\n",__TIME__);
    printf("file : %s\n",__FILE__);
    printf("LINE : %d\n",__LINE__);
    printf("LINE : %d\n",__STDC__);
    return 0;
}