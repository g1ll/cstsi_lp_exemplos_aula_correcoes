#include<stdio.h>
int main(void){
    int a,b,q;

    scanf("%d %d %d",&a,&b,&q);
    int v[q];

    for(int i=0;i<q;i++){
        if(i%2==0){ 
            v[i] = a;
        }else{ 
            v[i] = b;
        }
    }

    for(int i=0;i<q;i++) printf("%d ",v[i]);
    
    printf("\n");
    return 0;
}