#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca arr[j] e arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE];

    // 1. Vetor totalmente ordenado de forma decrescente
    for (int i = 0; i < SIZE; i++) {
        arr[i] = SIZE - i;
    }
    bubbleSort(arr, SIZE);
    printf("Ordenado de forma crescente a partir de decrescente:\n");
    printArray(arr, SIZE);

    // 2. Vetor totalmente ordenado de forma crescente
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }
    bubbleSort(arr, SIZE);
    printf("Ordenado de forma crescente:\n");
    printArray(arr, SIZE);

    // 3. Primeira metade ordenada crescente, segunda metade ordenada decrescente
    for (int i = 0; i < SIZE / 2; i++) {
        arr[i] = i + 1; // Crescente
    }
    for (int i = SIZE / 2; i < SIZE; i++) {
        arr[i] = SIZE - i; // Decrescente
    }
    bubbleSort(arr, SIZE);
    printf("Primeira metade crescente, segunda metade decrescente:\n");
    printArray(arr, SIZE);

    // 4. Primeira metade ordenada decrescente, segunda metade ordenada crescente
    for (int i = 0; i < SIZE / 2; i++) {
        arr[i] = SIZE / 2 - i; // Decrescente
    }
    for (int i = SIZE / 2; i < SIZE; i++) {
        arr[i] = i + 1; // Crescente
    }
    bubbleSort(arr, SIZE);
    printf("Primeira metade decrescente, segunda metade crescente:\n");
    printArray(arr, SIZE);

    // 5. Elementos totalmente aleatórios
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % SIZE; // Números aleatórios
    }
    bubbleSort(arr, SIZE);
    printf("Elementos aleatórios ordenados:\n");
    printArray(arr, SIZE);

    return 0;
}
