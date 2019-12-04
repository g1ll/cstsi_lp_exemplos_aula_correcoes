#include<stdio.h>

void exibeOnzeTracos(void);
void paralelogramoTracos(void);

int main(void){
    
    printf("\n");
    paralelogramoTracos();
    
    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeOnzeTracos(void){
    for(int i=0;i<11;i++)
        printf("-");
}

void paralelogramoTracos(void){
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<=i;j++)printf(" ");
        exibeOnzeTracos();
    }
}