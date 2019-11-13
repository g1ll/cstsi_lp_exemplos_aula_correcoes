#include<stdio.h>
#include<string.h>

int main(void){
    int cod,i,j;
    char email[100],wrd[100];

    printf("\ncode:\n");
    scanf("%d",&cod);
    while(cod!=3)
    {   
        printf("\nemail:\n");
        scanf("%s",email);
        if(cod==1){
            for(i=0;email[i]!='@';i++)
                wrd[i] = email[i];
        }else{
            for(j=0;email[j]!='@';j++);
            for(i=0,j++;i+j<strlen(email);i++)
                wrd[i] = email[i+j];
        }
        wrd[i]='\0';
        printf("\n%s",wrd);

        printf("\ncode:\n");
        scanf("%d",&cod);
    }

    printf("\n");
    // getchar();
    // getchar();
    return 0;
}