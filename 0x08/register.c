#include <stdio.h>

int main() {
    register int i,sum = 0;

    for (i = 1; i <=10; i++) {
        sum = sum + i; 
    }
    printf("sum = %d\n",sum);
    
    return 0;
}
