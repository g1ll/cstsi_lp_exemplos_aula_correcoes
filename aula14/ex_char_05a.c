#include<stdio.h>

int main(void){
    char x,y;

    x = 'A';
    y = 'B';

    if(x>y)
        printf("%c (%d) é maior  que %c (%d)\n",x,x,y,y);
    else
        printf("%c (%d) não é maior que %c (%d)\n",x,x,y,y);         
    
    getchar();
    // getchar();

    printf("\n\n\n");
    return 0;
}