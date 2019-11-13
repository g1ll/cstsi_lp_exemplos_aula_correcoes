#include<stdio.h>

int main(void){
    int n;
    char palavra[100];

    printf("\nn:");
    scanf("%d",&n);

    for(int i=0,j;i<n;i++){
        scanf("\n%s",palavra);
        for(j=0;palavra[j]!='\0';j++);
        for(int k = j-1;k>=0;k--)printf("-");
        printf("\n ");
        for(int k = j-1;k>=0;k--)
            printf("%c",palavra[k]);
        printf("\n");
        for(int k = j-1;k>=0;k--)printf("-");
        printf("\n");
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}