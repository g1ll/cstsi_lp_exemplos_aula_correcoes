#include<stdio.h>

int main(void){
    char x,y;

    x = 'A';
    y = 'B';

    if(x>y)
        printf("%c é maior  que %c\n",x,y);
    else
        printf("%c não é maior que %c\n",x,y);         
    
    getchar();
    // getchar();

    printf("\n\n\n");
    return 0;
}