#include "conio-for-linux-master/conio.h"

int main()
{
    char c,password[10];
    int i=0;
    printf("Digite a sua Senha:");
    c=getch();
    while(c!='\n'){
        printf("%c",c);
        password[i] = c;
        printf("*");
        i++;
        // c=getch();
        printf("%c",password[i]);
        c='\n';
    }
    printf("%s",password);
    return 0;
}