#include<stdio.h>
#include<string.h>

int main(void){
    int cod,i,j,n=0;
    char wrd[100],fwrd[100]="z",lwrd[100]="a";
    printf("\npalavras:\n\n");   
    while(n<8)
    {
        scanf("\n%s",wrd);

        for(i=0;i<strlen(wrd);i++){
            if(wrd[i]<fwrd[i]){
                strcpy(fwrd,wrd);
                i=strlen(wrd);  
            }else if(wrd[i]!=fwrd[i]){
                i=strlen(wrd);
            }
        }
        
        for(i=0;i<strlen(wrd);i++){
            if(wrd[i]>lwrd[i]){
                strcpy(lwrd,wrd);
                i=strlen(wrd);                
            }else if(wrd[i]!=lwrd[i]){
                i=strlen(wrd);
            }
        }
        n++;
    }

    printf("\nprimeira: %s",fwrd);
    printf("\nultima: %s",lwrd);
    printf("\n");
    getchar();
    getchar();
    return 0;
}