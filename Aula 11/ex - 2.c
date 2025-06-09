#include <stdio.h>
#include <string.h>

struct aluno{
char nome[50];
float nota;
};

int main(){
    struct aluno alunos [100];
    int qtdAlunos;
    float soma = 0;

    printf("Quantas alunos voce quer cadastrar ? ");
    scanf ("%d", &qtdAlunos);
    getchar();
    
    if (qtdAlunos > 100 || qtdAlunos < 0){
        printf ("Valor invalido!");
    }
    else {
        for (int i = 0; i < qtdAlunos; i++){
            printf ("\nAluno %d\n", i + 1);
            printf ("Nome: ");
            scanf ("%49[^\n]", alunos[i].nome);
            printf ("Nota: ");
            scanf ("%f", &alunos[i].nota);
            getchar();

            soma += alunos[i].nota;
        }
    }

    for (int i = 0; i < qtdAlunos; i++){
        printf ("\nDados do Aluno %d:\n", i + 1);
        printf ("Nome: %s\n", alunos[i].nome);
        printf ("Nota: %.2f\n", alunos[i].nota);
    }

    printf ("\n\nMedia: %f", soma / qtdAlunos);

    return 0;
}