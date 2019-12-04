#include<stdio.h>

void linhaDeAsteriscos(int num);

int main(void){
    linhaDeAsteriscos(5);
    printf("\nIFSUL\n");
    linhaDeAsteriscos(22);
    getchar();
    return 0;
}

void linhaDeAsteriscos(int num){
    for(int i=0;i<num;i++)
        printf("*");
}