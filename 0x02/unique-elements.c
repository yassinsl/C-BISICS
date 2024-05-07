#include <stdio.h>

int main(void) {
    int a[10];
    int element, i, j, b = 0;
    printf("Please enter the number of elements in the array: ");
    scanf("%d", &element);
    printf("The number of elements in the array is %d\n", element);
    
    if (element < 1 || element > 10) {
        printf("Invalid number of elements. It should be between 1 and 10.\n");
        return 1;
    }

    for (i = 0; i < element; i++) {
        printf("Element-%d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("The unique elements found in the array are: ");

    for (i = 0; i < element; i++) {
        b = 0;
        for (j = 0; j < element; j++) {
            if (i != j) {
                if (a[i] == a[j]) {
                    b++;
                    break;
                }
            }
        }

        if (b == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}