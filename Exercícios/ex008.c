# include <stdio.h>
# include <stdlib.h>

int main ()
{
    float num_conta, saldo, debito, credito, saldo_em_reais;
    
    printf("Digite o número da sua conta : ");
    scanf("%f", &num_conta);
    
    printf("Digite o seu saldo em R$: ");
    scanf("%f", &saldo);
    
    printf("Digite o valor do seu Débito em R$: ");
    scanf("%f", &debito);
    
    printf("Digite o valor que você tem de Crédito em R$: ");
    scanf("%f", &credito);
    
    saldo_em_reais=(saldo-debito+credito);
    
    printf("\nO seu saldo atual em Reais é de R$%.2f\n",saldo_em_reais);
    
    if(saldo_em_reais>0)
    {
        printf("\nSEU SALDO ESTA POSITIVO");
    }
    else if(saldo_em_reais<0)
    {
        printf("SEU SALDO ESTÁ NEGATIVO");
    }
    else
    {
        printf("SUA CONTA ESTÁ ZERADA");
    }
    return 0;
}
