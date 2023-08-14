#include<stdio.h>

/*enum Meses{jan=1, fev, mar, abril, maio, jun, jul, ago, set, out, nov, dez}mesdoano;*/

void diasdeaula(int dia, int mes, int ano){
    int dia1, mes1, ano1;
    printf("Digite o dia, mes e ano atual: ");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
    printf("Digite o dia, mes e ano que vai terminar as aulas: ");
    scanf("%d", &dia1);
    scanf("%d", &mes1);
    scanf("%d", &ano1);

    int i ,soma = 0;
    int count = mes1 - mes;
    for (i = 0; i <= count; i++)
    {
        if (mes%2==0 || mes == 12)
        {
            soma += 4;
        }else{
            soma += 5;
        }
    }
    printf("Falta %d dias de aulas\n", soma-1);
}



int main(void){

    int dia, mes, ano;

   diasdeaula(dia, mes, ano);


    return 0;
}