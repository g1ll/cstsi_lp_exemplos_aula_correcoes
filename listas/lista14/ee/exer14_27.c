#include<stdio.h>

typedef struct hora
{
    int hora,
        min,
        seg;
} Horario;


int main(void){

    Horario tempo1,tempo2, menor;
    menor.hora = -1;

    printf("Informe um horario:\n(hh:mm:ss)\n ");
    scanf("%d:%d:%d",&tempo1.hora,
            &tempo1.min,&tempo1.seg);

    printf("Informe outro horario:\n(hh:mm:ss)\n ");
    scanf("%d:%d:%d",&tempo2.hora,
            &tempo2.min,&tempo2.seg);

    if(tempo1.hora==tempo2.hora)
        if(tempo1.min==tempo2.min)
            if(tempo1.seg==tempo2.seg)
                printf("Horários Iguais");
            else
                if(tempo1.seg<tempo2.seg)
                    menor = tempo1;
                else
                    menor = tempo2;
        else
            if(tempo1.min<tempo2.min)
                menor = tempo1;
            else
                menor = tempo2;
    else 
        if(tempo1.hora>tempo2.hora)
            menor = tempo2;
        else menor = tempo1;

    if(menor.hora>=0)
        printf("Horario menor: %02d:%02d:%02d",
        menor.hora,menor.min,menor.seg);
        
    printf("\n\n\n");

    getchar();
    getchar();
    return 0;
}