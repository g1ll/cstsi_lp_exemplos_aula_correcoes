#include <stdio.h>
struct Data{
    int dia,
        mes,
        ano;
};

int main(void){
    struct Data dt;

    printf("Informe o dia:");
    scanf("%d",&dt.dia);

    printf("Informe o mes:");
    scanf("%d",&dt.mes);

    printf("Informe ano:");
    scanf("%d",&dt.ano);

    if(dt.dia==7 && dt.mes ==9){
        printf("Dia da independencia!");
    }else{
        printf("Sem comemoração!");
    }

    printf("\nData digitada: %d/%d/%d\n\n",
            dt.dia,dt.mes,dt.ano);

    return 0;
}