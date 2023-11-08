#include <stdio.h>
#include <string.h>
void palindrome(char *str);
int main (void) 
{
    char str[100];
    printf("please enter String : ");
    scanf("%s", str);
    palindrome(str);
    return 0;
}
void palindrome(char *str)
{
    int i,start,end,j = 0;
    start = 0;
    end = strlen(str) - 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[start] != str[end])
        {
            j++;
            break;
        }
        else
        {
            start++;
            end--;
        }
    }
    if (j == 0)
    {
        printf(" %s is a palindrome\n",str);
    }
    else
    printf(" %s is a not palindrome\n",str);
}