#include<stdio.h>

int main(void){
    int c;
    char frase[500];

    do{
        c=0;
        gets(frase);
        printf("\nf: %s\n",frase);
        for(int i=0;frase[i]!='\0';i++){
            if(frase[i]==' ')c++;
        }
        if(c>0)printf("%d\n",c);
    }while(c>0);
    
    printf("\n");
    // getchar();
    // getchar();
    return 0;
}