#include<stdio.h>
int main(void){
    int i,q;

    do{
        printf("q: ");
        scanf("%d",&q);
    }while(q<1||q>10);
    
    int idades[q];

    for(i=0;i<q;i++)scanf("%d",&idades[i]);

    while(i!=-1){
        do{
            printf("\ni: ");
            scanf("%d",&i);
        }while((i<-1||i>q-1));

        if(i<q&&i!=-1)
            printf("\nidade:%d\n",idades[i]);
    }
    return 0;
}