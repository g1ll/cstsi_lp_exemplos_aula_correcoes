#include<stdio.h>
#include<string.h>

int main(void){
    
    char a[20],b[20];

    strcpy(a,"IFSUL");
    strcpy(b,a);

    printf("%s  %s\n",a,b);

    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}