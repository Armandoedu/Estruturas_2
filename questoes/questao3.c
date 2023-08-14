#include <stdio.h> 
 
int main() { 
    int limite; 
    printf("Digite o valor limite para os lados do triangulo pitagorico: "); 
    scanf("%d", &limite); 
 
    printf("Triplos pitagoricos:\n"); 
 
    for (int cateto1 = 1; cateto1 <= limite; cateto1++) { 
        for (int cateto2 = cateto1; cateto2 <= limite; cateto2++) { 
            for (int hipotenusa = cateto2; hipotenusa <= limite; hipotenusa++) { 
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) { 
                    printf("%d, %d, %d\n", cateto1, cateto2, hipotenusa); 
                } 
            } 
        } 
    } 
 
    return 0; 
}
