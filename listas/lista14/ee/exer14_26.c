#include<stdio.h>

typedef struct hora
{
    int hora,
        min,
        seg;
} Horario;


int main(void){

    Horario tempo;

    printf("Informe a hora minutos e segundos:\n(hh:mm:ss)\n ");
    scanf("%d:%d:%d",&tempo.hora,&tempo.min,&tempo.seg);

    printf("\nHorario informado:  %d:%d:%d",
        tempo.hora,tempo.min,tempo.seg);

    printf("\n\n\n");

    getchar();
    getchar();
    return 0;
}