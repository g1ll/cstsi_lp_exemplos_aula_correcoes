#include<stdio.h>
#include<stdlib.h>

int main(void){
    int s=5,
        v[s],i=0,tmp=1,a,b;

    system("clear");//cls

    if(s>=5){
        printf("\n%i\n",s);
    }

    scanf("%d %d",&a,&b);

    for(i=0;i<s;i++)scanf("%d",&v[i]);

    printf("\nvetor: ");

    for(i=0;i<s;i++)printf(" %d ",v[i]);
    
    printf("\na=%d; b=%d\n",a,b);

    
    //system("pause");

}