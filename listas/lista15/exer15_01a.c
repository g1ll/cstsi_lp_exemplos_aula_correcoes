#include<stdio.h>

void exibeOnzeTracos(void);

int main(void){
    
    printf("\n");
    exibeOnzeTracos();
    
    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeOnzeTracos(void){
    for(int i=0;i<11;i++)
        printf("-");
}