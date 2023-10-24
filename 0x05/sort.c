#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 16:20
C program to sort an array of integers using the bubble sort algorithm
*/
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("\n The elements in the array after sorting:\n");

    for (int i = 0; i < n; i++) {
        printf("element - %d : %d\n", i + 1, arr[i]);
    }

    return 0;
}
