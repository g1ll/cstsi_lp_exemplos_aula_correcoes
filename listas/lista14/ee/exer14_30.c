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

    Aluno alunos[5];
    Data data,datas[5],idade;
    int i,j,inomes[5];
    int diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i =0;i<5;i++){
        
        printf("\nAluno:\nNome: ");
        //gets(aluno.nome);
        fgets(alunos[i].nome,100,stdin);
        alunos[i].nome[strlen(alunos[i].nome)-1] = '\0';//remover o \n
        
        printf("Matricula: ");
        scanf("%d",&alunos[i].matricula);

        printf("Data de Nascimento (dd/mm/aaaa): ");
        scanf("%d/%d/%d",
            &alunos[i].dataNasc.dia,
            &alunos[i].dataNasc.mes,
            &alunos[i].dataNasc.ano);

        getchar();//captura o \n anterior
    }

    printf("\nData:");
    scanf("\n%d/%d/%d",
        &data.dia,
        &data.mes,
        &data.ano);
    
    for(i=0,j=0;i<5;i++){
        if(alunos[i].dataNasc.mes==data.mes){
            datas[j] = alunos[i].dataNasc;
            inomes[j] = i;
            j++;
        }
    }

    printf("\nAniversariantes do mes %d.\n",data.mes);
    for(i=0;i<j;i++){
        int alunoi = inomes[i]; 
        idade.ano = data.ano - alunos[alunoi].dataNasc.ano;
        idade.mes = data.mes - alunos[alunoi].dataNasc.mes;
        idade.dia = data.dia - alunos[alunoi].dataNasc.dia;
        
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
                idade.mes = alunos[alunoi].dataNasc.mes;
                //idade.mes = aluno.dataNasc.mes-1;
            }
            idade.dia = diasMes[data.mes-2]+idade.dia;//e se mes for 31 ou fevereiro?
        }

        printf("\n %s (%d/%d/%d) fara/fez %d anos",alunos[alunoi].nome,
            datas[i].dia,datas[i].mes,datas[i].ano,idade.ano+1);
    }

    printf("\n\n\n");
    getchar();
    getchar();
    return 0;
}