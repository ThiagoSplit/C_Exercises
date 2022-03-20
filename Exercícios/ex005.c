# include <stdio.h>
# include <stdlib.h>

int main ()
{
    float numero;
    
    printf("Digite qualquer valor: ");
    scanf("%f", &numero);
    
    if (numero > 0)
    {
        printf("POSITIVO");
    }
    else if (numero < 0)
    {
        printf("NEGATIVO");
    }
    else
    {
        printf("O número digitado foi 0");
    }
    return 0;
}
