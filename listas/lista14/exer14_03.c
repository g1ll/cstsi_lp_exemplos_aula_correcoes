#include<stdio.h>

int main(void){
    char c1,c2;

    printf("\ncaracteres:\n");
    scanf("%c %c",&c1,&c2);
    
    while(c1!=c2){
        if(c1<c2)
            printf("Crescente\n");
        else
            printf("Decrescente\n");
        scanf("\n%c %c",&c1,&c2);
    }

    printf("\n%c",178);
    return 0;
}