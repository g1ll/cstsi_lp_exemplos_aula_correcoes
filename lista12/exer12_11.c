#include<stdio.h>

int main(void){

    int q,n=0;

    do{
        printf("\nTamanho do Vetor[max: 10]:\n");
        scanf("%d",&q);
    }while(q>10);


    int z[q];
    printf("\nValores para z:\n");
    for(int i=0;i<q;i++){
        scanf("%d",&z[i]);
        if(z[i]<0)n++;
    }

    int N[n];
    for(int i=0,j=0;i<q;i++){
        if(z[i]<0){
            N[j]=z[i];
            j++;
        }
    }
    printf("\nValores para N:\n");
    for(int i=0;i<n;i++)printf(" %d ",N[i]);

    printf("\nPressione <enter> para sair!\n");
    getchar();
    getchar();


    return 0;
}
