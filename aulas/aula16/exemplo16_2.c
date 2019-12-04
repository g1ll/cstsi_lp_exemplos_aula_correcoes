#include<stdio.h>

void linhaDeAsteriscos(int num);

int main(void){
    
    for(int a=1;a<=5;a++){
        linhaDeAsteriscos(6-a);
        printf("\n");
    }

    getchar();
    return 0;
}

void linhaDeAsteriscos(int n){
    for(int i=0;i<n;i++)
        printf("*");
}