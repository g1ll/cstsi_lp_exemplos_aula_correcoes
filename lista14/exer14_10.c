#include<stdio.h>

int main(void){
    int t;
    char c1;

    printf("\nt:");
    scanf("%d",&t);

    printf("\nchar:");
    scanf("\n%c",&c1);

    for(int i=1;i<=t;i++){
        printf("\n\t");
        for(int j=0;j<i;j++)
            printf("%c",c1);
    }

    printf("\n");
    getchar();
    getchar();
    return 0;
}