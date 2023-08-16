#include <stdio.h>
#include <stdlib.h>

void swap(int *first, int *second) {
    int tmp = *first;
    *first = *second;
    *second = tmp;
}

void printTab(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//divide and conquer principle
int partition(int arr[], int l, int h) {
    int pivot = arr[h];//the last element of the array
    int Lindex = l - 1;//the smallest element of the array
    for (int i = l; i < h; i++) {
        if (arr[i] < pivot) {
            Lindex++;
            swap(&arr[Lindex], &arr[i]);
        }
    }
    swap(&arr[Lindex + 1], &arr[h]);
    return (Lindex + 1);
}

void quickSort(int arr[], int l, int h) {
    if (l < h) {
        int pindex = partition(arr, l, h);
        quickSort(arr, l, pindex - 1);
        quickSort(arr, pindex + 1, h);
    }
}

int main() {
    int t[] = {23, 10, 16, 11, 20};
    int n = sizeof(t) / sizeof(t[0]);
    printf("Before Sorting: ");
    printTab(t, n);
    quickSort(t, 0, n - 1); // Corrected the range for quickSort
    printf("After sorting: ");
    printTab(t, n);
    return 0;
}
