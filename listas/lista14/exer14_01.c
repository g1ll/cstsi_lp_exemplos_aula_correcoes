#include<stdio.h>

int main(void){
    int i;
    char ch;

    for(i=0;i<5;i++){
        scanf("\n%c",&ch);
        printf((ch<'a')?"Sim\n":"Nao\n");
    }
    printf("\n%c",178);
    return 0;
}