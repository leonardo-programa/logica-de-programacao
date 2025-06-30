#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#define Max_Aluno 100

typedef struct {
    int matricula;
    char nome[100];
    float nota1, nota2;
    float media;
} Aluno;

// Funções utilitarias
int Menu();
int VerificaAluno(Aluno alunos[], int totalAluno, int numero);
// Funções funcionais
void Matricula(Aluno alunos[], int *totalAluno, int *id);
void AddNota(Aluno alunos[], int totalAluno);
void ExibirAlunos(Aluno alunos[], int totalAlunos);
void BuscarAluno(Aluno alunos[], int totalAlunos);
void AtualizarAluno(Aluno alunos[], int totalAlunos);
void ExcluirAluno(Aluno alunos[], int *totalAlunos);
void ExibirAprRpr(Aluno alunos [], int totalAlunos);
void RankingAlunos(Aluno alunos [], int totalAlunos);
void DadosEscola(Aluno alunos[], int totalAlunos);

// Funções do banco de dados
void SalvarDados (Aluno alunos[], int totalAlunos);
void CarregarDados (Aluno alunos[], int *i, int *id);

int main(){
    Aluno alunos[Max_Aluno];
    int opcao, totalAlunos = 0, id;

    CarregarDados (alunos, &totalAlunos, &id);
    do {
        opcao = Menu();

        switch (opcao){
            case 0:
                SalvarDados(alunos, totalAlunos);
                printf ("\nSaindo...");
                break;
            case 1:
                Matricula (alunos, &totalAlunos, &id);
                break;
            case 2:
                AddNota (alunos, totalAlunos);
                break;
            case 3:
                ExibirAlunos (alunos, totalAlunos);
                break;
            case 4:
                BuscarAluno (alunos, totalAlunos);
                break;
            case 5: 
                AtualizarAluno(alunos, totalAlunos);
                break;
            case 6:
                ExcluirAluno(alunos, &totalAlunos);
                break;
            case 7:
                ExibirAprRpr(alunos, totalAlunos);
                break;
            case 8:
                RankingAlunos(alunos, totalAlunos);
                break;
            case 9:
                DadosEscola(alunos, totalAlunos);
                break;
            default:
                printf ("Numero inválido!\n");
                break;
        }
        Sleep(3000);
        system("cls");
    } while (opcao != 0);
    return 0;
}

//Funções utilitarias
int Menu(){
    int opcao;

    printf ("\n============ GERENCIAMENTO DE ALUNOS ============\n");
    printf ("1 - Matricula            6 - Excluir Aluno\n");
    printf ("2 - Adicionar Notas      7 - Aprovados / Reprovados\n");
    printf ("3 - Exibir Alunos        8 - Ranking de alunos\n");
    printf ("4 - Buscar Aluno         9 - Media da escola\n");
    printf ("5 - Atualizar Aluno      0 - Sair\n");
    printf ("\n============ GERENCIAMENTO DE ALUNOS ============\n\n");

    printf ("Digite a opcao desejada: ");
    scanf ("%d", &opcao);

    return opcao;
}
int VerificaAluno(Aluno alunos[], int totalAlunos, int numero){
    if (totalAlunos == 0){
        printf ("\nNenhum aluno cadastrado!\n");
        return -1;
    }

    for (int i = 0; i < totalAlunos; i++){
        if (numero == alunos[i].matricula){
            return i;
        }
    }
    printf ("\nAluno nao encontrado!\n");
    return -2;
}
// Funções funcionais
void Matricula (Aluno alunos[], int *totalAlunos, int *id){
    if (*totalAlunos >= Max_Aluno){
        printf ("\nTotal de alunos atingido!\n");
        return;
    }
    if (*totalAlunos == 0){
        *id = 1001;
    }

    int i = *totalAlunos;
    printf ("\nDigite o nome do aluno: ");
    getchar();
    fgets(alunos[i].nome, Max_Aluno, stdin);
    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
    alunos[i].matricula = *id;
    alunos[i].nota1 = 0;
    alunos[i].nota2 = 0;
    alunos[i].media = 0;

    printf ("\n====== DADOS ======\n");
    printf ("Nome: %s\n", alunos[i].nome);
    printf ("Matricula: %d\n", alunos[i].matricula);
    printf ("Nota 1 - %.2f\nNota 2 - %.2f\n", alunos[i].nota1, alunos[i].nota2);
    printf ("Media: %.2f", alunos[i].media);
    printf ("\n====== DADOS ======\n");

    (*totalAlunos)++;
    (*id)++;
}
void AddNota(Aluno alunos [], int totalAlunos){
    int numero;
    printf ("\nDigite o numero de matricula do aluno: ");
    scanf ("%d", &numero);

    int i = VerificaAluno (alunos, totalAlunos, numero);

    if (i >= 0){
        printf ("\n====== DADOS ======\n");
        printf ("Nome: %s\n", alunos[i].nome);
        printf ("Matricula: %d\n", alunos[i].matricula);
        printf ("Nota 1 - %.2f\nNota 2 - %.2f\n", alunos[i].nota1, alunos[i].nota2);
        printf ("Media: %.2f", alunos[i].media);
        printf ("\n====== DADOS ======\n");

        printf ("\nDigite a primeira nota do aluno: ");
        scanf ("%f", &alunos[i].nota1);
        printf ("\nDigite a segunda nota do aluno: ");
        scanf ("%f", &alunos[i].nota2);

        while (1){
            if ((alunos[i].nota1 > 10 || alunos[i].nota1 < 0) && (alunos[i].nota2 > 10 || alunos[i].nota2 < 0)){
                printf ("\nAs duas notas tem valores invalidos!\n");

                printf ("\nDigite a primeira nota do aluno: ");
                scanf ("%f", &alunos[i].nota1);
                printf ("\nDigite a segunda nota do aluno: ");
                scanf ("%f", &alunos[i].nota2);

            }
            else if (alunos[i].nota1 > 10 || alunos[i].nota1 < 0){
                printf ("\nA primeira nota tem um valor invalido!\n");
                            
                printf ("\nDigite a primeira nota do aluno: ");
                scanf ("%f", &alunos[i].nota1);
            }
            else if (alunos[i].nota2 > 10 || alunos[i].nota2 < 0){
                printf ("\nA segunda nota tem um valor invalido!\n");

                printf ("\nDigite a segunda nota do aluno: ");
                scanf ("%f", &alunos[i].nota2);
            }
            else {
                alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
                printf ("\n====== DADOS ======\n");
                printf ("Nome: %s\n", alunos[i].nome);
                printf ("Matricula: %d\n", alunos[i].matricula);
                printf ("Nota 1 - %.2f\nNota 2 - %.2f\n", alunos[i].nota1, alunos[i].nota2);
                printf ("Media: %.2f", alunos[i].media);
                printf ("\n====== DADOS ======\n");
                break;
            }
        }
    }
}
void ExibirAlunos(Aluno alunos[], int totalAlunos){
    if (totalAlunos == 0){
        printf ("\nNenhum aluno cadastrado!\n");
        return;
    }
    for(int i = 0; i < totalAlunos; i++){
        printf ("\n====== DADOS ======\n");
        printf ("Nome: %s\n", alunos[i].nome);
        printf ("Matricula: %d\n", alunos[i].matricula);
        printf ("Nota 1: %.2f\nNota 2: %.2f\n", alunos[i].nota1, alunos[i].nota2);
        printf ("Media: %.2f\n", alunos[i].media);
        printf ("====== DADOS ======\n");
    }
}
void BuscarAluno(Aluno alunos[], int totalAlunos){
    int numero;
    
    printf("\nDigite o numero de matricula do aluno: ");
    scanf ("%d", &numero);

    int i = VerificaAluno (alunos, totalAlunos, numero);

    if (i >= 0){
        printf ("\n====== DADOS ======\n");
        printf ("Nome: %s\n", alunos[i].nome);
        printf ("Matricula: %d\n", alunos[i].matricula);
        printf ("Nota 1 - %.2f\nNota 2 - %.2f", alunos[i].nota1, alunos[i].nota2);
        printf ("\n====== DADOS ======\n\n");
    }
}
void AtualizarAluno(Aluno alunos[], int totalAlunos){
    int numero;
    printf ("\nDigite o numero de matricula do aluno: ");
    scanf ("%d", &numero);

    int i = VerificaAluno (alunos, totalAlunos, numero);

    if (i >= 0){
        printf ("\n========= DADOS =========\n");
        printf ("Nome: %s\n", alunos[i].nome);
        printf ("Matricula: %d\n", alunos[i].matricula);
        printf ("Nota 1: %.2f\nNota 2: %.2f\n", alunos[i].nota1, alunos[i].nota2);
        printf ("Media: %.2f", alunos[i].media);
        printf ("\n========= DADOS =========\n");

        getchar();
        printf ("\nNovo nome: ");
        fgets(alunos[i].nome, Max_Aluno, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        
        printf ("Novas notas\n");
        printf ("Nota 1: ");
        scanf ("%f", &alunos[i].nota1);
        printf ("Nota 2: ");
        scanf ("%f", &alunos[i].nota2);
        
        while (1){
            if ((alunos[i].nota1 > 10 || alunos[i].nota1 < 0) && (alunos[i].nota2 > 10 || alunos[i].nota2 < 0)){
                printf ("\nAs duas notas tem valores invalidos!\n");

                printf ("\nNota 1: ");
                scanf ("%f", &alunos[i].nota1);
                printf ("\nNota 2: ");
                scanf ("%f", &alunos[i].nota2);

            }
            else if (alunos[i].nota1 > 10 || alunos[i].nota1 < 0){
                printf ("\nA primeira nota tem um valor invalido!\n");
                            
                printf ("\nNota 1: ");
                scanf ("%f", &alunos[i].nota1);
            }
            else if (alunos[i].nota2 > 10 || alunos[i].nota2 < 0){
                printf ("\nA segunda nota tem um valor invalido!\n");

                printf ("\nNota 2: ");
                scanf ("%f", &alunos[i].nota2);
            }
            else {
                alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
                printf ("\n=== DADOS ATUALIZADOS ===\n");
                printf ("Nome: %s\n", alunos[i].nome);
                printf ("Matricula: %d\n", alunos[i].matricula);
                printf ("Nota 1: %.2f\nNota 2: %.2f\n", alunos[i].nota1, alunos[i].nota2);
                printf ("Media: %.2f", alunos[i].media);
                printf ("\n=== DADOS ATUALIZADOS ===\n");
                break;
            }
        }
    }
}
void ExcluirAluno(Aluno alunos[], int *totalAlunos){
    int numero;
    printf ("\nDigite qual aluno deseja desmatricular: ");
    scanf ("%d", &numero);

    int iDel = VerificaAluno (alunos, *totalAlunos, numero);

    if (iDel >= 0){
        for (int i = iDel; i < (*totalAlunos) - 1; i++){
            strcpy(alunos[i].nome, alunos[i + 1].nome);
            alunos[i].matricula = alunos[i + 1].matricula;
            alunos[i].nota1 = alunos[i + 1].nota1;
            alunos[i].nota2 = alunos[i + 1].nota2; 
            alunos[i].media = alunos [i + 1].media;
        }
        
        strcpy (alunos[(*totalAlunos) - 1].nome, "");
        alunos[(*totalAlunos) - 1].nota1 = 0;
        alunos[(*totalAlunos) - 1].nota2 = 0;
        alunos[(*totalAlunos) - 1].media = 0;
        (*totalAlunos)--;
        printf ("\nAluno desmatriculado com sucesso!\n");
    }
}
void ExibirAprRpr(Aluno alunos[], int totalAlunos){
    int apr = 0, rpr = 0;

    if (totalAlunos == 0){
        printf ("\nNenhum aluno cadastrado!\n");
        return;
    }
        printf ("\n==== APROVADO ====\n");

        for (int i = 0; i < totalAlunos; i++){
            if (alunos[i].media >= 6){
                printf ("Aluno: %s\n", alunos[i].nome);
                apr++;
            }
        }
        printf ("==== APROVADO ====\n");
        printf ("\n=== REPROVADO ===\n");

        for (int i = 0; i < totalAlunos; i++){
            if (alunos[i].media < 6){
                printf ("Aluno: %s\n", alunos[i].nome);
                rpr++;
            }
        }
        printf ("=== REPROVADO ===\n");
        printf ("\nQuantidade de alunos aprovados: %d", apr);
        printf ("\nQuantidade de alunos reprovados: %d\n", rpr);
}
void RankingAlunos(Aluno alunos[], int totalAlunos){
    if (totalAlunos == 0){
        printf ("\nNenhum aluno cadastrado!\n");
        return;
    }
    
    Aluno ranking [Max_Aluno];
    for (int i = 0; i < totalAlunos; i++){
        ranking[i] = alunos[i];
    }

    for (int i = 0; i < totalAlunos; i++){
        for (int j = 0; j < totalAlunos - i - 1; j++){
            if(ranking[j + 1].media > ranking[j].media){
                Aluno id = ranking[j];
                ranking[j] = ranking [j + 1];
                ranking [j + 1] = id;
            }
        }
    
    }
    printf ("\n=== RANKING DE MEDIA ===\n");
    for (int i = 0; i < totalAlunos; i++){
        printf ("%d - %s - %.2f\n", i + 1, ranking[i].nome, ranking[i].media);
    }
    printf ("=== RANKING DE MEDIA ===\n");
}
void DadosEscola (Aluno alunos[], int totalAlunos){
    int apr = 0, rpr = 0;
    float SomaMedia = 0;

    if (totalAlunos == 0){
        printf ("\nNenhum aluno cadastrado!\n");
        return;
    }
    int MaiorA = 0, MenorA = totalAlunos - 1;

    printf ("\n=== DADOS DA ESCOLA ===\n");
    printf ("Quantidade de alunos: %d\n", totalAlunos);

    for (int i = 0; i < totalAlunos; i++){
        if (alunos[i].media >= 6){
            apr++;
        }
        else{
            rpr++;
        }
        if (alunos[i].media >= alunos[MaiorA].media){
            MaiorA = i;
        }
        if (alunos[i].media <= alunos[MenorA].media){
            MenorA = i;
        }

        SomaMedia += alunos[i].media;
    }
    
    if (totalAlunos > 0) {
        float MediaGeral = SomaMedia / totalAlunos;

        printf ("Quantidade de Aprovados: %d\n", apr);
        printf ("Quantidade de Reprovados: %d\n", rpr);
        printf ("Taxa de aprovacao da escola (aproximado): %.2f\n", ((float)apr / totalAlunos) * 100);
        printf ("Media geral da escola: %.2f\n\n", MediaGeral);
        
        printf ("Dados do aluno destaque:\n");
        printf ("Nome: %s\n", alunos[MaiorA].nome);
        printf ("Media: %.2f\n\n", alunos[MaiorA].media);

        printf ("Dados do pior aluno:\n");
        printf ("Nome: %s\n", alunos[MenorA].nome);
        printf ("Media: %.2f\n", alunos[MenorA].media);
    } 
    printf ("\n=== DADOS DA ESCOLA ===\n");
}
// Funções do banco de dados
void SalvarDados (Aluno alunos[], int totalAlunos){
    FILE *file = fopen ("boletim.txt", "w");

    if (file == NULL){
        printf ("Erro ao abrir o arquivo!");
        return;
    }

    for (int i = 0; i < totalAlunos; i++){
        fprintf (file, "%d,%s,%.2f,%.2f,%.2f\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].media);
    }

    fclose(file);

}
void CarregarDados (Aluno alunos[], int *i, int *id){
    FILE *file = fopen ("boletim.txt", "r");

    if (file == NULL){
        printf ("Erro ao abrir o arquivo!");
        return;
    }

    while (fscanf(file, "%d,%99[^,],%f,%f,%f\n", &alunos[*i].matricula, alunos[*i].nome, &alunos[*i].nota1, &alunos[*i].nota2, &alunos[*i].media) == 5){
        (*i)++;
    }
    
    if (*i == 0){
        (*id) = 1001;
    }
    else if (*i > 0){
        (*id) = alunos[*i - 1].matricula + 1;
    }

    fclose(file);
}
