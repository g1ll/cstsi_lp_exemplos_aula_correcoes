#include<stdio.h>
int main(void){
    int i,v[10],s,a,b,n=1,maior=0,menor=1e9;

    printf("\nVetor: ");
    for(i=0;i<10&&n>0;i++,s=i-1){
        scanf("%d",&n);
        if(n>0)v[i]=n;
    }

    while((getchar())!='\n');

    printf("\nVetor lido: V[%d] ",s);
    for(i=0;i<s;i++)printf(" %d ",v[i]);

    printf("\nIntervalo: ");
    scanf("%d %d",&a,&b);
    
    if(b>s-1)b=s-1;
    if(a<0)a=0;
    if(a>b){
        int aux = a;
        a = b;
        b = aux;
    }

    printf("\nbuscar de %d a %d!\n",a,b);

    for(i=a;i<=b;i++){
        maior =(v[i]>maior)?v[i]:maior;
        if(v[i]<menor)
            menor=v[i];
    }

    printf("\nMaior: %d\nMenor: %d \n",maior,menor);
    printf("\nPressione <enter> para sair!\n");
    getchar();
    getchar();
    return 0;
}