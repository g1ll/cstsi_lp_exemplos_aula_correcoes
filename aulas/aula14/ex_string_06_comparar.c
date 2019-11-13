#include<stdio.h>
#include<string.h>

int main(void){
    
    char str1[7],str2[7];

    strcpy(str1,"amora");
    strcpy(str2,"uva");

    printf("\n%s < %s",str1,str2);
    if(str1<str2)
        printf(" = V");
    else
        printf(" = F");

    if("amora"<"uva")
        printf(" = V");
    else
        printf(" = F");
    
    printf("\n%d\n",str1[0]);
    printf("\n%d\n",str2[0]);

    printf("\namora < uva");
    printf(("amora"<"uva")?" = V":" = F");
        
    printf("\nuva < uvas");
    printf("uva"<"uvas"?" = V":" = F");

    printf("\n' teste' > amora");
    printf(((" Aeste">"amora")?" = V":" = F"));

    /*
        printf("\n' teste' > amora");
        if(" teste" > "amora")
            printf(" = V");
        else
            printf(" = F");
    */

    printf("\n121 > 9");
    printf("121">"9"?" = V":" = F");

    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}