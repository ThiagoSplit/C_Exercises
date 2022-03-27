/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
	a. o produto do dobro do primeiro com metade do segundo.
	b. a soma do triplo do primeiro com o terceiro.
	c. o terceiro elevado ao cubo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int n1, n2, resp_a;
    float n3, resp_b, resp_c;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o numero real: ");
    scanf("%f", &n3);

    resp_a=(2*n1)*(n2/2);

    resp_b=(3*n1)+n3;

    resp_c=pow(n3,3);


    printf("A) O produto do dobro do primeiro com metade do segundo e: %d \n", resp_a);

    printf("B) A soma do triplo do primeiro com o terceiro e: %.0f \n", resp_b);

    printf("C) O terceiro elevado ao cubo e: %.2f \n", resp_c);


    return 0;
}
