#include<stdio.h>

int main(void){
    int t;
    char c1,c2;

    printf("\nt:");
    scanf("%d",&t);

    printf("\nchars:");
    scanf("\n%c %c",&c1,&c2);

    for(int i=1,c=1;i<=t;i++,c+=2){
        printf("\n\t");
        for(int j=0;j<=t-i;j++)
            printf("%c",c2);
        for(int j=1;j<=c;j++)
            printf("%c",c1);
        for(int j=0;j<=t-i;j++)
            printf("%c",c2);
    }

    printf("\n");
    getchar();
    getchar();
    return 0;
}