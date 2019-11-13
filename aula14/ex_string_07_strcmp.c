#include<stdio.h>
#include<string.h>

int main(void){
    
    char a[30],b[30],str1[7],str2[7];
    int cod;

    printf("\n\nCom OP REL\n\n");

    strcpy(str1,"amora");
    strcpy(str2,"Uva");

    printf("\n%s < %s",str1,str2);
    if(str1<str2)
        printf(" = V");
    else
        printf(" = F");

    if("amora"<"Uva")
        printf(" = V");
    else
        printf(" = F");
    
    printf("\n%d\n",str1[0]);
    printf("\n%d\n",str2[0]);

    printf("\namora < Uva");
    printf(("amora"<"Uva")?" = V":" = F");
        
    printf("\nuva < uvas");
    printf("uva"<"uvas"?" = V":" = F");

    printf("\n'teste' > amora");
    printf(((" Aeste">"amora")?" = V":" = F"));

    printf("\n\nCom STRCMP\n");

    printf("\namora < Uva");
    printf(strcmp("amora","Uva")<0?" = V":" = F");
        
    printf("\nuva < uvas");
    printf(strcmp("uva","uvas")<0?" = V":" = F");

    printf("\n'teste' > amora");
    printf(strcmp("teste","amora")>0?" = V":" = F");

    printf("\n\n");
    printf("Digite uma palavra: ");
    scanf("%s",a);
    printf("Digite outra: ");
    scanf("%s",b);

    cod = strcmp(a,b);
    /* strcmp(stringA,stringB)

    0 se as strings são iguais.
    > 0 (positivo) se a stringA é maior que a stringB.
    < 0 (negativo) se a stringA é menor que a stringB.
    
    */

    if(cod==0)
        printf("Iguais\n");
    else
        if(cod > 0)
            printf("%s > %s\n",a,b);
        else
            printf("%s < %s\n",a,b);
        
    printf("\n%d",cod);
        

    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}