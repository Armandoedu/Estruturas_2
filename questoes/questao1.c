#include <stdio.h>

void binario(int num) {
    for (int i = 9; i >= 0; i--) {
        printf("%c", (num & (1 << i)) ? '1' : '0');
    }
}

int main() {
    for (int i = 0; i <= 127; i++) {
        binario(i);
        printf("  ");

        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
