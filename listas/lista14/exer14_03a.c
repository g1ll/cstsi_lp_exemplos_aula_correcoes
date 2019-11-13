#include<stdio.h>

int main(void){
    char c1,c2;

    printf("\ncaracteres:\n ");
    scanf("%c %c",&c1,&c2);
    
    while(c1!=c2){
        printf((c1<c2)?"Crescente\n":"Decrescente\n");
        scanf("\n%c %c",&c1,&c2);
    }

    printf("\n%c",178);
    return 0;
}