#include<stdio.h>

void exibeOnzeTracos(void);
void retTracos(void);

int main(void){
    
    printf("\n");
    retTracos();
    printf("\n");
    retTracos();
    
    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeOnzeTracos(void){
    for(int i=0;i<11;i++)
        printf("-");
}

void retTracos(void){
    for(int i=0;i<3;i++){
        printf("\n");
        exibeOnzeTracos();
    }
}