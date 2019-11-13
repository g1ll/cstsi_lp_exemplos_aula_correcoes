#include<stdio.h>
int main(void){
    int or,n1,n2,aux;

    do{
        printf("\nordem: ");
        scanf("%d",&or);
        if(or==1||or==2){
            if(or==1) printf("(crescente)");
            else if(or==2) printf("(decrescente)");
            
            printf("\nn1: ");
            scanf("%d",&n1);

            printf("\nn2: ");
            scanf("%d",&n2);

            if(n1>n2){
                aux=n1;
                n1=n2;
                n2=aux;
            }
            
            printf("\n");
            if(or==1)
                for(int i =n1;i<=n2;i++)
                    printf("%d ",i);
            else
                for(int i =n2;i>=n1;i--)
                    printf("%d ",i);
            printf("\n");
        }
    }while(or==1||or==2);
    return 0;        
}