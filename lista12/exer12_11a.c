#include<stdio.h>

int main(void){

    int q,c=0;

    do{
        printf("\nq:");
        scanf("%d",&q);
    }while(q<0||q>10);

    int z[q];

    printf("\nz:");
    for(int i=0;i<q;i++){
        scanf("%d",&z[i]);
        if(z[i]<0)c++;
    }

    int n[c];
    c=0;
    for(int i=0;i<q;i++)
        if(z[i]<0){
            n[c]=z[i];
            c++;
        }

    printf("\n");
    for(int i=0;i<c;i++)
        printf(" %d",n[i]);

    printf("\n\n\n");
    return 0;
}