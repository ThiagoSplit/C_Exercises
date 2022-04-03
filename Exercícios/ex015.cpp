/*  O cardápio de uma lanchonete é o seguinte:

    Especificação   Código  Preço
    Cachorro Quente 100     R$ 9,20
    Bauru Simples   101     R$ 8,30
    Bauru com ovo   102     R$ 8,50
    Hambúrguer      103     R$ 16,20
    Suco            202     R$ 8,50
    Refrigerante    201     R$ 7,00
    Água Mineral    203     R$ 3,70

    Escreva um algoritmo que leia o código de um sanduíche
    e de uma bebida, e mostre o valor a pagar pelo cliente.
    Assuma as entradas corretas.*/






#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese_brazil");

    int cod=1, qtd;
    float valor_total=0, cachorro_quente, bauru_simples, bauru_com_ovo, hamburguer, refri, agua, suco;


    printf("CÓDIGO     LANCHE               VALOR\n");
    printf("\n100        CACHORRO QUENTE      R$9,20");
    printf("\n101        BAURU SIMPLES        R$8,30");
    printf("\n102        BAURU COM OVO        R$8,50");
    printf("\n103        HAMBURGUER           R$16,20");
    printf("\n201        REFRIGERANTE         R$7,00");
    printf("\n202        SUCO                 R$8,50");
    printf("\n203        ÁGUA MINERAL         R$3,70\n");

    printf("\nPARA FINALIZAR DIGITE 0 EM CÓDIGO DO PRODUTO\n");

    while (cod!=0)
    {
        printf("\nCODIGO DO PRODUTO: ");
        scanf("%d", &cod);

        cachorro_quente=9.20;
        bauru_simples=8.30;
        bauru_com_ovo=8.50;
        hamburguer=16.20;
        refri=7.00;
        agua=3.70;
        suco=8.50;

        switch(cod)
        {
            case 100:
            printf("QUANTIDADE: ");
            scanf("%d", &qtd);
            valor_total=valor_total+(cachorro_quente*qtd);
            break;

            case 101:
            printf("QUANTIDADE: ");
            scanf("%d", &qtd);
            valor_total=valor_total+(bauru_simples*qtd);
            break;

            case 102:
            printf("QUANTIDADE: ");
            scanf("%d", &qtd);
            valor_total=valor_total+(bauru_com_ovo*qtd);
            break;

            case 103:
            printf("QUANTIDADE: ");
            scanf("%d", &qtd);
            valor_total=valor_total+(hamburguer*qtd);
            break;

            case 201:
            printf("QUANTIDADE: ");
            scanf("%d", &qtd);
            valor_total=valor_total+(refri*qtd);
            break;

            case 202:
            printf("QUANTIDADE: ");
            scanf("%d", &qtd);
            valor_total=valor_total+(suco*qtd);
            break;

            case 203:
            printf("QUANTIDADE: ");
            scanf("%d", &qtd);
            valor_total=valor_total+(agua*qtd);
            break;

            default:
            printf("\nPEDIDO FINALIZADO \nVALOR TOTAL: %.2f\n",valor_total);
            break;
        }
    }

return 0;
}
