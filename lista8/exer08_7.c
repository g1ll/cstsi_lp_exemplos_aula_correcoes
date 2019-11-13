#include<stdio.h>
int main(){
    int n;
    do{
        printf("\nn: ");
        scanf("%d",&n);
    }while(n<0);

    for(int i=0;i<n;i++)
        printf("\nPROGRAMACAO");
    
    printf("\n");
    return 0;
}