/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
1. salário bruto.
2. quanto pagou ao INSS.
3. quanto pagou ao sindicato.
4. o salário líquido.
5. calcule os descontos e o salário líquido, conforme a tabela abaixo:
6. + Salário Bruto : R$
7. - IR (11%) : R$
8. - INSS (8%) : R$
9. - Sindicato ( 5%) : R$
    = Salário Liquido : R$*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_brazil");
    float sal_bruto, calc_inss, calc_ir, calc_sind, sal_liq;
    int inss, sind, ir;
    printf("Digite o quanto você ganhou de salário bruto nesse mês: ");
    scanf("%f", &sal_bruto);

    printf("Digite quantos porcentos são descontados de INSS: ");
    scanf("%d", &inss);

    printf("Digite quantos porcentos são descontado para o sindicato: ");
    scanf("%d", &sind);

    printf("Digite a porcentagem que é descontada do Imposto de Renda: ");
    scanf("%d", &ir);

    calc_inss=(sal_bruto*inss/100);
    calc_ir=(sal_bruto*ir/100);
    calc_sind=(sal_bruto*sind/100);
    sal_liq=(sal_bruto-calc_ir-calc_inss-calc_sind);

    printf("\n Vamos lá!\nOs descontos são:\n%d %% de INSS \n%d %% de IR \n%d %% para o Sindicato\n", inss, ir, sind);
    printf("\nSendo assim: \nOs descontos em R$ respectivamente são: \nR$ %.2f \nR$ %.2f \nR$ %.2f\n", calc_inss, calc_ir, calc_sind);

    printf("O SEU SALÁRIO LÍQUIDO FOI DE R$%.2f", sal_liq);

    return 0;
}
