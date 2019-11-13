#include<stdio.h>

int main(void){
    char ch;

    printf("\nch: ");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')
        printf("\n%c (%d) é MAIÚSCULA !\n",ch,ch);
    else
        printf("\n%c (%d) é minúscula !\n",ch,ch);         
    getchar();
    ch = getchar();
    printf("\n\nch: %c(%d)",ch,ch);

    // getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}