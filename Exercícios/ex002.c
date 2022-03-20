# include <stdio.h>
# include <stdlib.h>

int main () 
{
    int idade;
    char nome[20];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    if(idade >=0 && idade <=2)
    {
        printf("Você é um bebe!");
    }
    else if(idade >= 3 && idade <= 11)
    {
        printf("Você é um criança!");
    }
    else if(idade >= 12 && idade <= 21)
    {
        printf("Você é um Jovem!");
    }
    else if(idade >= 22 && idade <= 64)
    {
        printf("Você é um adulto!");
    }
    else if(idade >= 65 && idade <= 100)
    {
        printf("Você é um idoso!");
    }
    else if(idade > 101)
    {
        printf("Você é muito velhinho!");
    }
    
    printf("\nMe chamo %s e tenho %d anos",nome,idade); 
        
        
        

    return 0;
}
