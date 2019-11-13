#include<stdio.h>
#include<string.h>

int main(void){
    int n,cod;
    char wrd1[100],wrd2[100];

    printf("\nn:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("\n%s",wrd1);
        scanf("\n%s",wrd2);
        cod = strcmp(wrd1,wrd2);

        if(cod==0)      
            printf("IGUAIS");
        else if(cod>0)  
            printf("DECRESCENTE");
        else            
            printf("CRESCENTE");
            
        printf("\n"); 
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}