#include<stdio.h>

int main(void){
    int i,n;
    char ch;

    printf("\nn:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("\n%c",&ch);
        printf(" %d\n",ch);
    }

    printf("\n%c",178);
    return 0;
}