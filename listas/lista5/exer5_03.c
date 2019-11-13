#include<stdio.h>
#include<stdlib.h>

int main(void){

    float n1,n2,n3,n4,m;

    system("clear");

    printf("\nn1:");
    scanf("%f",&n1);
    
    printf("\nn2:");
    scanf("%f",&n2);
    
    printf("\nn3:");
    scanf("%f",&n3);
    
    printf("\nn4:");
    scanf("%f",&n4);

    m = (n1+n2*2+n3*3+n4)/7;

    printf("\n\tmedia: %.2f",m);

    if(m>=9){
        printf("\n\tConceito: A\n");
    }else{
        if(m>=7.5 && m<9){
            printf("\n\tConceito: B\n");
        }else{
            if(m>=6 && m<7.5){
                printf("\n\tConceito: C\n");
            }else{
                printf("\n\tConceito: D\n");
            }
        }
    }

    getchar();getchar();
    system("clear");
}