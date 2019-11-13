#include<stdio.h>
int main(void){
    int i,v[10],s,a,b,n=1,maiores=0,num=4;

    printf("\nVetor: ");
    for(i=0;i<10&&n>0;i++,s=i-1){
        scanf("%d",&n);
        if(n>0)v[i]=n;
    }

    while((getchar())!='\n');

    if(s>0){
        printf("\nVetor lido: V[%d] ",s);
        for(i=0;i<s;i++)printf(" %d ",v[i]);
        
        printf("\nIntervalo: ");
        scanf("%d %d",&a,&b);
        while ((a<0||a>s-1)||(b<0||b>s-1)){
            printf("\nValores invalidos!\nIntervalo [%d - %d]: ",0,s-1);
            scanf("%d %d",&a,&b);
        }
        
        if(b>s-1)b=s-1;
        if(a<0)a=0;
        if(a>b){
            int aux = a;
            a = b;
            b = aux;
        }

        printf("\nbuscar de %d a %d!\n",a,b);

        for(i=a;i<=b;i++)
            if(v[i]>num)maiores++;
        
        printf("\nMaiores que %d: %d\n",num,maiores);
        printf("\nPressione <enter> para sair!\n");
        getchar();
        getchar();
    }
    return 0;
}