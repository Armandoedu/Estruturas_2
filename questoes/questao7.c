#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1;
    }
    else if (m==1)
    {
        return n + 1;
    }else if (m>1 && n>1)
    {
        return f(m, n-1) + f(m - 1, n);
    }else {
        return 0;
    }
}

int main() {
    int m, n;
    
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int resultado = f(m, n);
    
    printf("O resultado de f(%d, %d) e: %d\n", m, n, resultado);
    
    return 0;
}
