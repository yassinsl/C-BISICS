#include <unistd.h>
int main (void)
{
    char str[20] = "BYE BYE PROGRAM C";
    write(1, str,17);
    write(1,"\n",1);
    return (0);
}