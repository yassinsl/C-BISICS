#include <stdio.h>

void print_combn_recursive(int n, int start, int current, int *combination) {
    if (current == n) {
        for (int i = 0; i < n; i++) {
            printf("%d", combination[i]);
        }

        if (combination[0] != 10 - n) {
            printf(", ");
        }

        return;
    }

    for (int i = start; i <= 9; i++) {
        combination[current] = i;
        print_combn_recursive(n, i + 1, current + 1, combination);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n >= 10) {
        return; // Invalid input
    }

    int combination[10]; // Assuming n < 10
    print_combn_recursive(n, 0, 0, combination);

    printf("\n");
}

int main() {
    int n;
    printf("Enter a value for n (0 < n < 10): ");
    scanf("%d", &n);

    ft_print_combn(n);

    return 0;
}
