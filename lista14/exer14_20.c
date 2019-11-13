#include<stdio.h>
#include<string.h>

int main(void){
    int o,cod;
    char wrd1[100],wrd2[100];

    printf("\no:");
    scanf("%d",&o);
    while(o>=1&&o<=2){
        scanf("\n%s",wrd1);
        scanf("\n%s",wrd2);
        cod = strcmp(wrd1,wrd2);

        if(cod==0)
            printf("\n%s,%s",wrd1,wrd2);
        else if(cod>0)
            if(o==1)
                printf("\n%d %d: %s,%s",cod,o,wrd2,wrd1);
            else
                printf("\n%d %d: %s,%s",cod,o,wrd1,wrd2);
        else 
            if(o==2)
                printf("\n%d %d: %s,%s",cod,o,wrd2,wrd1);
            else
                printf("\n%d %d: %s,%s",cod,o,wrd1,wrd2);

        printf("\n");
        printf("\no:");
        scanf("%d",&o); 
    }
    printf("\n");
    // getchar();
    // getchar();
    return 0;
}