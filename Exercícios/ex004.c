# include <stdio.h>
# include <stdlib.h>

int main (){
    float valor_combustivel, combustivel_gasto, valor;

    printf("Digite o valor médio do combustível gasto  na viajem em R$: ");
    scanf("%f", &valor_combustivel);
    
    printf("Digite a quantidade de combustível gasto na viajem em Litros: ");
    scanf("%f", &combustivel_gasto);
    
    valor=(valor_combustivel*combustivel_gasto);
    
    printf("\nO custo estimado de combustível gasto nessa viajem foi de R$%.2f",valor);
    
    return 0;
}
