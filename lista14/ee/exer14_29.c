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
    int idade;

    printf("Data Atual:");
    scanf("%d/%d/%d",
        &hoje.dia,
        &hoje.mes,
        &hoje.ano);
    
    getchar();
    printf("Nome: ");
    gets(aluno.nome);

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
        
        idade = hoje.ano - aluno.dataNasc.ano;
        
        printf("\n\tIdade: %d\n",idade);

        if(idade>=18){
            printf("\n%s é maior de 18 e possui %d anos.\n",
                aluno.nome,idade);
        }

        printf("\nNovo Aluno\n\nNome: ");
        getchar();
        gets(aluno.nome);
    }

    printf("\n\n\n");
    return 0;
}