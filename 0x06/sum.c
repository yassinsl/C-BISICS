#include <stdio.h>

void array(int *a, int b, int (*s)(int));
int sum(int *a, int b);

int main(void) {
    int a[10], b;

    printf("Please enter the number of elements for the array: ");
    scanf("%d", &b);

    if (b <= 10) {
        array(a, b, sum);

        int total = sum(a, b);
        printf("The sum of the array elements is: %d\n", total);
    } else {
        printf("Array size exceeds the maximum limit (10).\n");
    }

    return 0;
}

void array(int *a, int b, int (*s)(int)) {
    int i;

    printf("Please enter the elements of the array:\n");
    for (i = 0; i < b; i++) {
        printf("Element-%d: ", i);
        scanf("%d", &a[i]);
    }

    printf("The elements in the array are:\n");
    for (i = 0; i < b; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (i = 0; i < b; i++) {
        a[i] = s(a[i]);
    }
}

int sum(int *a, int b) {
    int sum = 0, i;
    for (i = 0; i < b; i++) {
        sum += a[i];
    }
    return sum;
}