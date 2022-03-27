/*Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s, sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�:
1. sal�rio bruto.
2. quanto pagou ao INSS.
3. quanto pagou ao sindicato.
4. o sal�rio l�quido.
5. calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
6. + Sal�rio Bruto : R$
7. - IR (11%) : R$
8. - INSS (8%) : R$
9. - Sindicato ( 5%) : R$
    = Sal�rio Liquido : R$*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_brazil");
    float sal_bruto, calc_inss, calc_ir, calc_sind, sal_liq;
    int inss, sind, ir;
    printf("Digite o quanto voc� ganhou de sal�rio bruto nesse m�s: ");
    scanf("%f", &sal_bruto);

    printf("Digite quantos porcentos s�o descontados de INSS: ");
    scanf("%d", &inss);

    printf("Digite quantos porcentos s�o descontado para o sindicato: ");
    scanf("%d", &sind);

    printf("Digite a porcentagem que � descontada do Imposto de Renda: ");
    scanf("%d", &ir);

    calc_inss=(sal_bruto*inss/100);
    calc_ir=(sal_bruto*ir/100);
    calc_sind=(sal_bruto*sind/100);
    sal_liq=(sal_bruto-calc_ir-calc_inss-calc_sind);

    printf("\n Vamos l�!\nOs descontos s�o:\n%d %% de INSS \n%d %% de IR \n%d %% para o Sindicato\n", inss, ir, sind);
    printf("\nSendo assim: \nOs descontos em R$ respectivamente s�o: \nR$ %.2f \nR$ %.2f \nR$ %.2f\n", calc_inss, calc_ir, calc_sind);

    printf("O SEU SAL�RIO L�QUIDO FOI DE R$%.2f", sal_liq);

    return 0;
}
