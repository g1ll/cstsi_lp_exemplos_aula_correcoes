#include<stdio.h>

int main(void){
    int t;

    printf("\nt:");
    scanf("%d",&t);

    for(int i=0;i<t;i++)
        printf("X");
    
    printf("\n");
    getchar();
    getchar();
    return 0;
}