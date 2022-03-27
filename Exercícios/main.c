#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float salario, valor_hora, salario_final;
    int horas;
    printf("\nQual o seu salario atual: ");
    scanf("%f", &salario);

    printf("\nQuantas horas voce fez nesse mes? ");
    scanf("%d", &horas);

    printf("\nQual e o valor da sua hora? ");
    scanf("%f", &valor_hora);

    salario_final=((horas*valor_hora)+salario);

    printf("\nO meu salario no final do mes foi de R$%.2f",salario_final);


return 0;
}
