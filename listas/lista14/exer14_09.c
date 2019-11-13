#include<stdio.h>

int main(void){
    int t;
    char c1,c2;

    printf("\nt:");
    scanf("%d",&t);

    printf("\nchars:");
    scanf("\n%c %c",&c1,&c2);

    for(int i=0;i<t;i++)
        if(i%2==0)
            printf("%c",c1);
        else
            printf("%c",c2);
    
    printf("\n");
    getchar();
    getchar();
    return 0;
}