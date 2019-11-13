#include<stdio.h>

int main(void){
    int t;
    char c1,c2;

    printf("\nt:");
    scanf("%d",&t);

    printf("\nchars:");
    scanf("\n%c %c",&c1,&c2);

    for(int i=1;i<=t;i++){
        printf("\n\t");
        for(int j=0;j<i;j++)
            printf("%c",c1);
        for(int j=0;j<i;j++)
            printf("%c",c2);
    }

    printf("\n");
    getchar();
    getchar();
    return 0;
}