#pragma pack(1)
#include <stdio.h>

struct Example {
    char a;      
    int b;       
    char c;      
};

int main() {
    struct Example ex;
    printf("Size of Example struct: %lu\n", sizeof(ex));
    return 0;
}
