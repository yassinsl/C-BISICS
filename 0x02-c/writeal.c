#include <unistd.h>

int main(void) {
    char c;
    for(c = 'a'; c>= 'a'&& c <= 'z'; c++)
    {
      write(1,&c,1);
    }
    write(1,"\n",1);
}