#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j;
    char letra,wrd1[100];

    printf("\nletra:");
    scanf("%c",&letra);

    printf("\npalavra:");
    scanf("%s",wrd1);

    for(i=0,j=0;wrd1[i]!='\0';i++){
        if(wrd1[i]!=letra)j++;
    }
    
    char wrd2[j+1];

    for(i=0,j=0;wrd1[i]!='\0';i++){
        if(wrd1[i]!=letra){
            wrd2[j]=wrd1[i];
            j++;
        }
    }
    wrd2[j]='\0';

    printf("\n%s",wrd2);

    printf("\n");
    getchar();
    getchar();
    return 0;
}