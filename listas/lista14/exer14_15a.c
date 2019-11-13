#include<stdio.h>

int main(void){
    int c,max=500;
    char frase[max];

    do{
        c=0;
        // gets(frase);
        fgets(frase,max,stdin);//mais seguro
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