#include<stdio.h>

int main(void){
    char ordem,ch1,ch2,aux;

    printf("\nOrdem: ");
    printf("\n\tC = crescente");
    printf("\n\tD = decrescente");
    printf("\n\tF = sair\n");

    do{ 
        scanf("%c",&ordem);
    }while(ordem!='C'&&ordem!='D'&&ordem!='F');

    printf("\nOrdem: %c\n",ordem);
    
    while(ordem != 'F')
    {

        scanf("\n%c %c",&ch1,&ch2);

        printf("\n%c %c %c \n",ordem,ch1,ch2);

        if(ch1>ch2){
            aux = ch1;
            ch1 = ch2;
            ch2 = aux;
        }
        
        switch(ordem)
        {
            case 'C':
                /*Crescente*/
                printf("\n%c %c\n",ch1,ch2);
                break;
            case 'D':
                /*Decrescente*/
                printf("\n%c %c\n",ch2,ch1);
                break;
        }
        printf("\nOrdem: ");
        do scanf("\n%c",&ordem);
        while(ordem!='C'&&ordem!='D'&&ordem!='F');
    }
    
    return 0;
}