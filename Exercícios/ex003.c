# include <stdio.h>
# include <stdlib.h>
int main (void)
{
    float altura,base,area;
    printf("Informe a altura do Triângulo: ");
    scanf("%f",&altura);
    
    printf("Informe a base do Triângulo: ");
    scanf("%f",&base);
    
    area=(base*altura)/2;
    
    printf("O resultado é: %f",area);
    return 0;
}
