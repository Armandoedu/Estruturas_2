#include <stdio.h> 
 
int produtoRecursivo(int x1, int x2) { 
    if (x2 == 0) { 
        return 0; 
    } else if (x2 > 0) { 
        return x1 + produtoRecursivo(x1, x2 - 1); 
    } else { 
        return -produtoRecursivo(x1, -x2); 
    } 
} 
 
int main() { 
    int x1, x2; 
     
    printf("Digite o valor de x1: "); 
    scanf("%d", &x1); 
     
    printf("Digite o valor de x2: "); 
    scanf("%d", &x2); 
     
    int resultado = produtoRecursivo(x1, x2); 
     
    printf("O resultado de %d * %d = %d\n", x1, x2, resultado); 
     
    return 0; 
}
