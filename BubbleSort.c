#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *t, int n) {
    int i, j;
    int tmp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (t[j] > t[j + 1]) { 
                tmp = t[j + 1];
                t[j + 1] = t[j];
                t[j] = tmp;
            }
        }
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
    BubbleSort(t, n);
    printf("\nAfter sorting: ");
    printTab(t, n);

    return 0;
}
