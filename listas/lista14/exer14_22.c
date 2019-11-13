#include<stdio.h>
#include<string.h>

int main(void){
    int cod;
    char wrd[100];

    printf("\npalavra:\n");
    scanf("%s",wrd);
    while(strcmp(wrd,"fim")!=0)
    {   cod = 0;
        for(int i=0;wrd[i]!='\0';i++){
            if(wrd[i]=='a'
                ||wrd[i]=='e'
                ||wrd[i]=='i'
                ||wrd[i]=='o'
                ||wrd[i]=='u')
                cod++;
        }

        printf("\n%d",cod);

        printf("\npalavra:\n");
        scanf("%s",wrd);    
    }

    printf("\n");
    // getchar();
    // getchar();
    return 0;
}