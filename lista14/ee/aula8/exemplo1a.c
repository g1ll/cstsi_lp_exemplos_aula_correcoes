#include <stdio.h>
struct Data{
    int dia,
        mes,
        ano;
};

int main(void){
    struct Data dt;

    printf("Informe o dia, mes e ano no formato (dd/mm/aaaa): ");
    scanf("%d/%d/%d",&dt.dia,&dt.mes,&dt.ano);

    if(dt.dia==7 && dt.mes ==9){
        printf("Dia da independencia!");
    }else{
        printf("Sem comemoração!");
    }

    printf("\nData digitada: %d/%d/%d\n\n",
            dt.dia,dt.mes,dt.ano);

    return 0;
}