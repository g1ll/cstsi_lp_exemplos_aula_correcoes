#include<stdio.h>

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

    printf("Nome: ");
    gets(aluno.nome);

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

    printf("\n\n\n");
    getchar();
    return 0;
}