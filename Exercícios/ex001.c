#include<stdio.h>
#include<stdlib.h>

int main (void){
    int numero;
    printf("Digite um número\n");
    scanf("%d", &numero);
    
    if(numero > 10){
        printf("O número digitado é maior do que 10");
    }

    else if (numero < 10){
        printf("O número digitado é menor que 10");
    }

    else {
        printf("O numero digitado é igual a 10");
    }

  
return 0;
}
