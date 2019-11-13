#include<stdio.h>
#include<string.h>

typedef struct {
    int dia,mes,ano;
} Data;

typedef struct 
{   
    char nome[100];
    int matricula;
    Data dataNasc;
} Aluno;

int main(void){

    Aluno aluno;
    Data hoje;
    Data idade;
    int diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Data Atual:");
    scanf("%d/%d/%d",
        &hoje.dia,
        &hoje.mes,
        &hoje.ano);
    
    getchar();//captura o \n anterior
    printf("\nAluno:\nNome: ");
    //gets(aluno.nome);
    fgets(aluno.nome,100,stdin);
    aluno.nome[strlen(aluno.nome)-1] = '\0';//remover o \n
    
    while(strcmp(aluno.nome,"fim")!=0){

        printf("Matricula: ");
        scanf("%d",&aluno.matricula);

        printf("Data de Nascimento (dd/mm/aaaa): ");
        scanf("%d/%d/%d",
            &aluno.dataNasc.dia,
            &aluno.dataNasc.mes,
            &aluno.dataNasc.ano);

        printf("\n\nAluno Cadastrado:\n");
        printf("\n\tMatricula: %d",aluno.matricula);
        printf("\n\tNome: %s",aluno.nome);
        printf("\n\tNascimento: %02d/%02d/%04d",
            aluno.dataNasc.dia,
            aluno.dataNasc.mes,
            aluno.dataNasc.ano);
        
        idade.ano = hoje.ano - aluno.dataNasc.ano;
        idade.mes = hoje.mes - aluno.dataNasc.mes;
        idade.dia = hoje.dia - aluno.dataNasc.dia;
        
        if(idade.mes<0||(idade.dia<0&&idade.mes==0)) {
            idade.ano-=1;
            if(idade.ano<0){
                idade.ano=0;
                idade.mes=0;
            }else{
                idade.mes = 12+idade.mes;
            }
        }

        // idade.dia = hoje.dia - aluno.dataNasc.dia;
        if(idade.dia<0){
            idade.mes-=1;
            // idade.ano-=1;
            if(idade.mes<=0){
                idade.mes = aluno.dataNasc.mes;
                //idade.mes = aluno.dataNasc.mes-1;
            }
            idade.dia = diasMes[hoje.mes-2]+idade.dia;//e se mes for 31 ou fevereiro?
        }

        printf("\n\tIdade: %d anos\n",idade.ano);

        if(idade.ano>=18&&(idade.mes>0||idade.dia>0)){
            printf("\n%s é maior de 18 e possui %d anos, %d meses e %d dias.\n",
                aluno.nome,idade.ano,idade.mes,idade.dia);
        }else{
            printf("\n%s NAO é maior de 18 e possui %d anos, %d meses e %d dias.\n",
                aluno.nome,idade.ano,idade.mes,idade.dia);
        }

        printf("\nNovo Aluno\n\nNome: ");
        getchar();//capturar o \n anterior
        fgets(aluno.nome,100,stdin);
        aluno.nome[strlen(aluno.nome)-1] = '\0';//remover o \n
    }

    printf("\n\n\n");
    return 0;
}