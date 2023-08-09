#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int *arr, int size) {
    int i, j, min = 0;
    for (i = 0; i < size; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

void printTab(int tab[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
}

int main() {
    int t[] = {23, 10, 16, 11, 20};
    int n = sizeof(t) / sizeof(t[0]);
    printf("Before Sorting: ");
    printTab(t, n);
    SelectionSort(t, n);
    printf("\nAfter sorting: ");
    printTab(t, n);

    return 0;
}
