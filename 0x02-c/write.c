#include <unistd.h>

int main(void) {
    char c[11] = "yassin";
    write(1, c, 11);
    write(1, "\n",1);
    return 0;
}