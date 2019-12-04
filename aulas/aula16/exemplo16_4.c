#include<stdio.h>

void linhaDeAsteriscos(int num,char c);

int main(void){
    linhaDeAsteriscos(5,'=');
    printf("\nIFSUL\n");
    linhaDeAsteriscos(10,'*');
    getchar();
    return 0;
}

void linhaDeAsteriscos(int num, char c){
    for(int i=0;i<num;i++)
        printf("%c",c);
}