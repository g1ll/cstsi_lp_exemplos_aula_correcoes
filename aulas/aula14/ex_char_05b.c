#include<stdio.h>

int main(void){
    char x,y;

    printf("\nx: ");
    scanf("%c",&x);
    getchar();
    printf("\ny: ");
    scanf("%c",&y);

    if(x>y)
        printf("\n%c (%d) é maior  que %c (%d)\n",x,x,y,y);
    else
        printf("\n%c (%d) não é maior que %c (%d)\n",x,x,y,y);         
    
    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}