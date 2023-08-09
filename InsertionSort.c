#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int arr[], int size){
    int i , j , tmp;
    for(i=0;i<size ; i++){
        tmp = arr[i];
        j = i-1;
        while(j >= 0 && tmp < arr[j]){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = tmp;

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
    InsertionSort(t, n);
    printf("\nAfter sorting: ");
    printTab(t, n);
    return 0;
}
