#include <stdio.h>
void string(void);
int main(void)
{
    string();
}
void string(void)
{
    char str1[10];
    char str2[10];
    printf("please enter a string 1 : ");
    scanf("%s",str1);
    printf("please enter a string 1 : ");
    scanf("%s",str2);
    printf("this is your strings %s %s\n",str1,str2);
    
}