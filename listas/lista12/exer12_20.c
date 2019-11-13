#include<stdio.h>

int main(void){
    int prods=5,
        cod[prods],
        qtd[prods],
        menu,cd,num,indice,cop,
        f; //Flag para produto nao encontrado
    
    float preco[prods];

    for(int i=0;i<prods;i++){
        printf("\nprod %d:\n",i);
        
        printf("\n\tcod: ");
        scanf("%d",&cod[i]);

        printf("\n\tqtd: ");
        scanf("%d",&qtd[i]);

        printf("\n\tpreco: ");
        scanf("%f",&preco[i]);
        printf("\n---------------\n");
    }

    printf("\nProdutos: ");
    printf("\n\tprod\tcod\tqtd\tpreco");
    for(int i=0;i<prods;i++){
        printf("\n\t%d\t%d\t%d\t%.2f",i,cod[i],qtd[i],preco[i]);
    }
    printf("\n---------------\n");
    printf("\nEscolha uma opcao do menu:\n");
    printf("\n\t1 - Venda:\n\t2 - Reposicao\n\t3 - Inventario\n\t4 - Sair\n");
    scanf("%d",&menu);
    while(menu!=4){
        while(menu<1||menu>4){
            printf("\nCodigo invalido!\nEscolha uma opcao valida:\n");
            printf("\n\t1 - Venda:\n\t2 - Reposicao\n\t3 - Inventario\n\t4 - Sair\n");
            scanf("%d",&menu);
        }

        if(menu!=3){
            f=0;
            printf("\n\tcod: ");
            scanf("%d",&cd);
            for(int i=0;i<prods;i++)
                if(cod[i]==cd){
                    f=1;
                    indice=i;
                    printf("\n---------------\n");
                    printf("\nProdudo Cod: %d\n",cd);
                }
        }
        if(f==1||menu==3){
            cop++;
            switch (menu)
            {
            case 1://VENDA
                printf("\nVenda: \n\tQtd vendida: ");
                scanf("%d",&num);
                qtd[indice]-=num;
                printf("\n\tValor da venda: %.2f\n",num*preco[indice]);
                break;
            case 2: //REPOR
                printf("\nReposicao: \n\tQuantidade: ");
                scanf("%d",&num);
                qtd[indice]+=num;
                printf("\n\tEstoque atualizado: %d unidades\n",qtd[indice]);
                break;
            case 3: //INVENTARIO
                printf("\n---------------\n");
                printf("\nProdutos: ");
                printf("\n\tprod\tcod\tqtd\tpreco\tTotal");
                for(int i=0;i<prods;i++){
                    printf("\n\t%d\t%d\t%d\t%.2f\t%.2f",i,cod[i],qtd[i],preco[i],preco[i]*qtd[i]);
                }
                printf("\n---------------\n");
                break;
            }
        }else printf("\n\t####Codigo invalido!###");

        printf("\n---------------\n");
        printf("\nEscolha uma opcao do menu:\n");
        printf("\n\t1 - Venda:\n\t2 - Reposicao\n\t3 - Inventario\n\t4 - Sair\n");
        scanf("%d",&menu);

    }
    printf("\nOperacoes executadas: %d\n",cop);
    printf("\nTchau!|:-)|!\n");
    printf("\n\n");
    return 0;
}