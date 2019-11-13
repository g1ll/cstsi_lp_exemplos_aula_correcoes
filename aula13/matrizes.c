#include<stdio.h>

int main(void){
    int m[][4] = {
                {1, 5, 9, -1},
                {2, 6, 10, 14},
                {3, 7, 11, 15},
                {4, 8, 20, 32}
            };


    for(int i=0;i<4;i++){
        printf("\n");
        for(int j=0;j<4;j++)
                printf(" %2.1d",m[i][j]);
    }

    for(int i=0,aux=0;i<=2;i++)
        for(int j=i+1;j<=3;j++){
            aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }

    printf("\n\n\nMatrix Transformada:\n\n");

    for(int i=0;i<4;i++){
        printf("\n");
        for(int j=0;j<4;j++)
                printf(" %2.1d",m[i][j]);
    }

    printf("\n\n\n");

}