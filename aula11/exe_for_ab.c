#include <stdio.h>

int main(void){
    int a,b;
    for(a=1;a<=2;a++){ /*A*/
        for(b=1;b<=3;b++){/*B*/
            printf("\n %d,%d",a,b);
        }
    }
    printf("\n");
    return 0;
}