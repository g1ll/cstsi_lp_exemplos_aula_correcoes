#include<stdio.h>
int main(void){
    int i,q=8,id,prods[q],find;

    printf("\nCadastrar Códigos: ");

    for(i=0;i<q;i++)scanf("%d",&prods[i]);

    printf("\nid: ");
    scanf("%d",&id);

    while(id>0){
            
        for(i=0,find=-1;i<q;i++)
            if(prods[i]==id){
                find=i;
                i=q;
            }
        
        if(find>=0)
            printf("\n\ni: %d",find);
        else 
            printf("\n\nProduto não encontrado!");

        printf("\n\nid: ");
        scanf("%d",&id);
    }
    return 0;
}