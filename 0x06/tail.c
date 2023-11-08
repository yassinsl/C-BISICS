#include <stdio.h>

int factorial(int n, int result) {
    if (n == 0) {
        return result;
    } else {
        return factorial(n - 1, n * result);
    }
}

int main() {
    int num = 5;
    int result = factorial(num, 1); // The initial result is 1
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
