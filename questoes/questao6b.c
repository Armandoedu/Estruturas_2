#include <stdio.h>

void inverterArrayRecursivo(int array[], int start, int end) {
    if (start >= end) {
        return;
    }

    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;

    inverterArrayRecursivo(array, start + 1, end - 1);
}

void inverterArray(int array[], int size) {
    inverterArrayRecursivo(array, 0, size - 1);
}

int main() {
    int size;

    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int array[size];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    inverterArray(array, size);

    printf("Array invertido:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
