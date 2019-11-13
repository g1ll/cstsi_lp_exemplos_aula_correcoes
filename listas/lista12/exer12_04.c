#include<stdio.h>
int main(void){
    int i,q,ano;

    do{
        printf("q: ");
        scanf("%d",&q);
    }while(q<1||q>10);
    
    int v[q],idades[q];

    for(i=0;i<q;i++)scanf("%d",&v[i]);
    printf("ano: ");
    scanf("%d",&ano);

    for(i=0;i<q;i++)idades[i]=ano-v[i];
    for(i=0;i<q;i++)printf(" %d ",idades[i]);
    return 0;
}