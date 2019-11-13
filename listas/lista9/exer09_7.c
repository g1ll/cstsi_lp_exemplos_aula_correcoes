#include<stdio.h>

int main(void){
    int cod,c1=0,c2=0,c3=0;

    printf("\nElevador: ");
    scanf("%d",&cod);
    while(cod>=1&&cod<=3){
        switch(cod){
            case 1: c1++;
            break;
            case 2: c2++;
            break;
            case 3: c3++;
            break;
        }
        printf("\nElevador: ");
        scanf("%d",&cod);
    }

    if(c1>c2&&c1>c3){
        printf("\n Elevador mais usado e o 1 !\n");
    }else{
        if(c2>c1&&c2>c3){
            printf("\n Elevador mais usado e o 2 !\n");
        }else{
            if(c3>c2&&c3>1){
                printf("\n Elevador mais usado e o 3!\n");
            }else{
                if(c2==c3&&c2==c1)
                    printf("\nOs Elevadores são usados com a mesma frequencia!\n");
                else
                    if(c2==c3)
                        printf("\nOs Elevadores 2 e 3 são os mais usados!\n");
                    else
                        if(c2==c1) printf("\nOs Elevadores 2 e 1 são os mais usados!\n");
                        else printf("\nOs Elevadores 1 e 3 são os mais usados!\n");
            }
        }
    }
}