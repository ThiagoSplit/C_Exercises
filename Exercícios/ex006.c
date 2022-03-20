# include <stdio.h>
# include <stdlib.h>

int main ()
{
    int num;
    
    printf("Digite qualquer valor inteiro: ");
    scanf("%d", &num);
    
    if(num % 2 == 0)
    {
        printf("\nO numero digitado é PAR");
    }
    else if(num % 2 == 1)
    {
        printf("\nO  numero digitado é IMPAR");
    }
    return 0;
}
