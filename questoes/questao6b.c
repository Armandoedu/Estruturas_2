#include<stdio.h>


int main() {

    int valor;
    printf("Digite quantos numeros vai colocar: ");
    scanf("%d", &valor);

    int vetor[valor];

    for (int j = 0; j < valor; j++)
    {
        scanf("%d ", &vetor[j]);
    }

    for (int i = valor-1; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    
}
