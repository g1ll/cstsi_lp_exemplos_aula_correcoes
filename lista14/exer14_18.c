#include<stdio.h>

int main(void){
    int n;
    char palavra[100];

    printf("\nn:");
    scanf("%d",&n);

    for(int i=0,j;i<n;i++){
        scanf("\n%s",palavra);
        for(j=0;palavra[j]!='\0';j++)
            if(palavra[j]=='a'||palavra[j]=='A')
                palavra[j]='-';
    
        printf("%s\n",palavra);
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}