#include<stdio.h>

int main(void){
    char c1,c2;

    printf("\ncaracteres:\n ");

    do scanf("%c",&c1);
    while((c1<65||c1>90)&&(c1<97||c1>122));

    do scanf("%c",&c2);
    while((c2<65||c2>90)&&(c2<97||c2>122));
    
    if(c1>=97)c1-=32;
    if(c2>=97)c2-=32;
    
    while(c1!=c2){
        
        printf((c1<c2)?"Crescente\n":"Decrescente\n");

        do scanf("%c",&c1);
        while((c1<65||c1>90)&&(c1<97||c1>122));

        do scanf("%c",&c2);
        while((c2<65||c2>90)&&(c2<97||c2>122));

        if(c1>=97)c1-=32;
        if(c2>=97)c2-=32;
    }

    printf("\n");
    return 0;
}