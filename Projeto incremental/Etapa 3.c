#include <stdio.h>
#include <string.h>
#define Max_Contas 100


typedef struct{
    int numero;
    char nome[100];
    float saldo;
} Conta;

int mostrarMenu (){
    int opcao;
      printf ("\n===== SISTEMA BANCARIO =====\n");
        printf ("0 - Sair\n");
        printf ("1 - Criar Conta\n");
        printf ("2 - Exibir Contas\n");
        printf ("3 - Depositar\n");
        printf ("4 - Sacar\n");
        printf ("5 - Buscar Conta\n");
        printf ("===========================\n\n");
        
        printf ("Escolha uma opcao: ");
        scanf ("%d", &opcao);
        printf ("\n===========================\n");
        return opcao;
    }
    
int verificaConta(Conta contas[], int numero, int total_Contas){
    
    if (total_Contas == 0){
        printf ("\nNao existem contas criadas!\n");
        return -1;
    }
        for (int i = 0; i < total_Contas; i++){
            if (numero == contas[i].numero){
                return i;
            }
        }
    printf ("\nConta nao encontrada!\n");
    return -2;
}

void criarConta(Conta contas[], int *total_Contas, int *id){
    if (*total_Contas >= Max_Contas){
        printf ("Limite de contas atingido.");
        return;
    }
    int i = *total_Contas;
    printf ("\n===== CADASTRO =====\n");
    getchar();
    printf ("Digite o nome do titular: ");
    fgets(contas[i].nome, Max_Contas, stdin);
    printf ("\n====================\n");
    contas[i].nome[strcspn(contas[i].nome, "\n")] = '\0';
    contas[i].numero = *id;
    contas[i].saldo = 0;

    (*total_Contas)++;
    (*id)++;
    
    printf ("\n===CONTA===\n");
    printf ("Nome: %s\n", contas[i].nome);
    printf ("Numero: %d\n", contas[i].numero);
    printf ("Saldo: %.2f\n", contas[i].saldo);
    printf ("===========\n");
}

void exibirConta(Conta contas[], int total_Contas){
    if (total_Contas == 0){
        printf ("\n\nNao existem contas criadas!\n\n");
    }
    else {
        for (int i = 0; i < total_Contas; i++){
            printf ("\n===CONTA===\n");
            printf ("Nome: %s\n", contas[i].nome);
            printf ("Numero: %d\n", contas[i].numero);
            printf ("Saldo: %.2f\n", contas[i].saldo);
            printf ("===========\n");
        }
    }
}

void depositar (Conta contas[], int total_Contas){
    int numero;
    float valorDepositado;

    printf ("\nDigite o numero da conta: ");
    scanf ("%d", &numero);

    printf ("\nBuscando conta...\n");

    int i = verificaConta (contas, numero, total_Contas);

    if (i >= 0){
        printf ("\nDigite o valor do deposito: ");
        scanf ("%f", &valorDepositado);


        if (valorDepositado <= 0){
            printf ("Valor de deposito invalido.\n");
            }
        else {
            contas[i].saldo += valorDepositado;
            printf ("\n===DADOS===\n");
            printf ("Numero: %d\n", contas[i].numero);
            printf ("Nome: %s\n", contas[i].nome);
            printf ("Saldo: %.2f\n", contas[i].saldo);
            printf ("===========\n");
            }
        }
    }

void sacar (Conta contas[], int total_Contas){
    int numero;
    float valorSacado;
    printf ("\nDigite o numero da conta: ");
    scanf ("%d", &numero);

    printf ("\nBuscando conta...\n\n");

    int i = verificaConta(contas, numero, total_Contas);

    if (i >= 0){
        printf ("Digite o valor a ser sacado: ");
        scanf ("%f", &valorSacado);

        if (valorSacado <= 0){
            printf ("Valor de saque invalido.\n\n");
        }
        else if (valorSacado > contas[i].saldo){
            printf ("Valor insuficiente para saque.\n\n");
        }
        else {
            contas[i].saldo -= valorSacado;

        printf ("\n===DADOS===\n");
        printf ("Numero: %d\n", contas[i].numero);
        printf ("Nome: %s\n", contas[i].nome);
        printf ("Saldo: %.2f\n", contas[i].saldo);
        printf ("===========\n");
        }
    }
}

void buscarConta (Conta contas[], int total_Contas){
    int numero;
    printf ("\nDigite o numero da conta: ");
    scanf ("%d", &numero);

    int i = verificaConta (contas, numero, total_Contas);
    if (i >= 0){
        printf ("\n===DADOS===\n");
        printf ("Numero: %d\n", contas[i].numero);
        printf ("Nome: %s\n", contas[i].nome);
        printf ("Saldo: %.2f\n", contas[i].saldo);
        printf ("===========\n\n");
    }
}

int main(){
    Conta contas[Max_Contas];
    int opcao, total_Contas, id = 1001;
    do{ 
        opcao = mostrarMenu();
        
        if (opcao == 0){
            printf ("Saindo do sistema...\n") ;
            break;
        }
        else{
            switch (opcao){

            case 1:
                criarConta (contas, &total_Contas, &id);
                break;
            case 2:
                exibirConta (contas, total_Contas);
                break;
            case 3:
                depositar (contas, total_Contas);
                break;
            case 4:
                sacar (contas, total_Contas);
                break;
            case 5:
                buscarConta (contas, total_Contas);
                break;
            default:
                printf("Opção Inválida!\n");
                break;
        }
      }
    } while (opcao != 0);
    return 0;
}
