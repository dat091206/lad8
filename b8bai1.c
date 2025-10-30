#include <stdio.h>

// Hàm hoán d?i
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm in m?ng
void printArray(int a[], int n) {
	int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// 1?? S?p x?p d?i ch? tr?c ti?p
void interchangeSort(int a[], int n) {
    printf("\n--- S?p x?p d?i ch? tr?c ti?p ---\n");
    int i;
    for (i = 0; i < n - 1; i++) {
    	int j;
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j])
                swap(&a[i], &a[j]);
        }
        printf("Bu?c %d: ", i + 1);
        printArray(a, n);
    }
}

// 2?? S?p x?p ch?n tr?c ti?p
void selectionSort(int a[], int n) {
    printf("\n--- S?p x?p ch?n tr?c ti?p ---\n");
    int i;
    for (i = 0; i < n - 1; i++) {
        int min = i;
        int j;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
            swap(&a[i], &a[min]);
        printf("Bu?c %d: ", i + 1);
        printArray(a, n);
    }
}

// 3?? S?p x?p n?i b?t
void bubbleSort(int a[], int n) {
    printf("\n--- S?p x?p n?i b?t ---\n");
    int i;
    for (i = 0; i < n - 1; i++) {
    	int j;
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
        printf("Bu?c %d: ", i + 1);
        printArray(a, n);
    }
}

int main() {
    int a[] = {7, 9, 10, -4, 5, 8, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int b[8], c[8];

    // Sao chép m?ng d? th? t?ng thu?t toán
    int i;
    for (i = 0; i < n; i++) {
        b[i] = c[i] = a[i];
    }

    interchangeSort(a, n);
    selectionSort(b, n);
    bubbleSort(c, n);

    return 0;
}

