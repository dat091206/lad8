#include <stdio.h>

// Hàm hoán d?i 2 ph?n t?
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm in m?ng, phân bi?t ph?n dã s?p x?p và chua s?p x?p
void printState(int a[], int n, int sorted_index) {
    printf("Ðã s?p x?p: ");
    for (int i = 0; i <= sorted_index; i++)
        printf("%d ", a[i]);

    printf("\tChua s?p x?p: ");
    for (int i = sorted_index + 1; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// Thu?t toán s?p x?p d?i ch? tr?c ti?p
void interchangeSort(int a[], int n) {
    printf("\n--- B?t d?u s?p x?p d?i ch? tr?c ti?p ---\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j])
                swap(&a[i], &a[j]);
        }
        printf("\nBu?c %d:\n", i + 1);
        printState(a, n, i);
    }

    printf("\n--- M?ng sau khi s?p x?p tang d?n ---\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// Hàm chính
int main() {
    int a[] = {7, 9, 10, -4, 5, 8, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    printf("M?ng ban d?u: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    interchangeSort(a, n);

    return 0;
}

