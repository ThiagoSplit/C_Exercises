/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule
	seu peso ideal, utilizando as seguintes fórmulas:
	a. Para homens: (72.7*h) - 58
	b. Para mulheres: (62.1*h) - 44.7*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "Portuguese_Brazil");
    float altura, homem, mulher;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    homem=((72.7*altura) - 58);
    mulher=((62.1*altura) - 44.7);

    printf("\nA) O peso ideal para um homem com a altura %.2fm é de %.2fKg", altura, homem);

    printf("\nB) O peso ideal para uma mulher com a altura %.2fm é de %.2fKg", altura, mulher);



    return 0;
}
