#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese_brazil");
    float tam_arq, vel_link, vel_down, temp_down, tempo, temp_min, temp_seg;

    printf("Digite o tamanho do arquivo em MB: ");
    scanf("%f", &tam_arq);

    printf("Digite a velocidade do Link de Internet em Mbps: ");
    scanf("%f",&vel_link);

    vel_down=(((tam_arq*8)/vel_link)/60);
    temp_down=(tam_arq/(vel_down/8));
    tempo=(tam_arq/vel_link);
    temp_min=(tempo/60);
    temp_seg=(temp_min*60);


    printf("\nA velocidade de download é de %.2f MB/s", vel_down);
    printf("\nSendo assim...");
    printf("\nO tempo aproximado para download do arquivo usando este link é de: %.2f minutos ou %.0f segundos", temp_min, temp_seg);

    return 0;

}
