#include<stdio.h>

int main(void){
    int n;
    char palavra[100];

    printf("\nn:");
    scanf("%d",&n);

    for(int i=0,j=0;i<n;i++){
        scanf("\n%s",palavra);
        for(j=0;palavra[j]!='\0';j++);
        printf(" %d\n",j);
    }

    printf("\n");
    getchar();
    getchar();
    return 0;
}