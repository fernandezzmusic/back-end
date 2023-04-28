#include <stdio.h>

#define MAX_ALUNOS 1
typedef float nota;

enum mes {janeiro = 1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};

struct aluno
{
    int codigo;
    char nome[20];
    int mes_nasc;
    nota prova1;
    nota prova2;
    nota prova3;
    nota prova4;
    nota nota_media;
};

int main()
{
    struct aluno Alunos[MAX_ALUNOS];
    int i;
    for (i=0; i < MAX_ALUNOS; i++)
    {

        printf("Digite o codigo do aluno: ");
        scanf("%d", &Alunos[i].codigo);
        printf("Digite o nome do aluno: ");
        scanf("%s", &Alunos[i].nome);
        printf("Digite o mes de nascimento do aluno: ");
        scanf("%d", &Alunos[i].mes_nasc);
        printf("nota prova 1: ");
        scanf("%f", &Alunos[i].prova1);
        printf("nota prova 2: ");
        scanf("%f", &Alunos[i].prova2);
        printf("nota prova 3: ");
        scanf("%f", &Alunos[i].prova3);
        printf("nota prova 4: ");
        scanf("%f", &Alunos[i].prova4);
    }

    for (i=0; i < MAX_ALUNOS; i++)
    {
        printf("codigo: %d, nome: %s, mes nascimento: %d, notas provas: %f - %f - %f - %f", Alunos[i].codigo, Alunos[i].nome, Alunos[i].mes_nasc, Alunos[i].prova1, Alunos[i].prova2, Alunos[i].prova3, Alunos[i].prova4);
    }
}
