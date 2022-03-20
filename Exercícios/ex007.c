#include <stdio.h>
#include <stdlib.h>

int main () 
{
    float area, altura, base; 
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    
    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &base);
    
    area=(base*altura);
    
    printf("\n A area do retangulo é= %1.f",area);
    
    return 0;
}
