#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese_brazil");
    float peso_excedente, valor_multa;

    printf("Digite a quantidade de Kgs que Jo�o trouxe: ");
    scanf("%f", &peso);

    peso_excedente=(peso-50);

    valor_multa=(peso_excedente*4);

    if(peso>50)
    {
        printf("Jo�o excedeu o peso em %.2fKg e deve pagar uma multa de R$%.2f", peso_excedente, valor_multa);
    }
    else if(peso<=49)
    {
        printf("\nJo�o n�o excedeu o peso, ent�o o mesmo n�o vai pagar a multa");
    }

    return 0;
}

