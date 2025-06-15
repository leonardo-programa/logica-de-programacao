#include <stdio.h>
#include <string.h>
#define Max_Contas 100

int total_Contas = 0;
int id = 1001;

typedef struct{
    int numero;
    char nome[100];
    float saldo;
} Conta;

int mostrarMenu (){
    int opcao;
      printf ("===== SISTEMA BANCARIO =====\n");
        printf ("0 - Sair\n");
        printf ("1 - Criar Conta\n");
        printf ("2 - Exibir Contas\n");
        printf ("3 - Depositar\n");
        printf ("4 - Sacar\n");
        printf ("5 - Buscar Conta\n");
        printf ("===========================\n\n");
        
        printf ("Escolha uma opcao: ");
        scanf ("%d", &opcao);

        return opcao;
    }

void criarConta(Conta contas[]){
    if (total_Contas >= Max_Contas){
        printf ("Limite de contas atingido.");
        return;
    }
    int i = total_Contas;
    printf ("\n---CADASTRO---\n");
    getchar();
    printf ("Digite o nome do titular: ");
    fgets(contas[i].nome, Max_Contas, stdin);
    contas[i].nome[strcspn(contas[i].nome, "\n")] = '\0';
    contas[i].numero = id;
    contas[i].saldo = 0;

    total_Contas++;
    id++;
    
    printf ("\n\n---CONTA---\n");
    printf ("Nome: %s\n", contas[i].nome);
    printf ("Numero: %d\n", contas[i].numero);
    printf ("Saldo: %.2f\n\n", contas[i].saldo);
}
void exibirConta(Conta contas[]){
    if (total_Contas == 0){
        printf ("\n\nNao existem contas criadas!\n\n");
    }
    else {
        for (int i = 0; i < total_Contas; i++){
            printf ("\n---CONTA---\n");
            printf ("Nome: %s\n", contas[i].nome);
            printf ("Numero: %d\n", contas[i].numero);
            printf ("Saldo: %.2f\n\n", contas[i].saldo);
        }
    }
}
void depositar (Conta contas[]){
    int numero;
    float valorDepositado;
    printf ("\nDigite o numero da conta: ");
    scanf ("%d", &numero);

    for (int i = 0; i < total_Contas; i++){
        if (numero == contas[i].numero){
            printf ("Digite o valor do deposito: ");
            scanf ("%f", &valorDepositado);

            if (valorDepositado <= 0){
                printf ("Valor de deposito invalido.\n\n");
            }
            else {
                contas[i].saldo += valorDepositado;
                printf ("---DADOS---\n");
                printf ("Numero: %d\n", contas[i].numero);
                printf ("Nome: %s\n", contas[i].nome);
                printf ("Saldo: %.2f\n\n", contas[i].saldo);
            }
        }
    }
}
void sacar (Conta contas[]){
    int numero;
    float valorSacado;
    printf ("\nDigite o numero da conta: ");
    scanf ("%d", &numero);

    for (int i = 0; i < total_Contas; i++){
        if (numero == contas[i].numero){
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

            printf ("---DADOS---\n");
            printf ("Numero: %d\n", contas[i].numero);
            printf ("Nome: %s\n", contas[i].nome);
            printf ("Saldo: %.2f\n\n", contas[i].saldo);
            }
        }
    }
}
void buscarConta (Conta contas[]){
    int numero;
    printf ("Digite o numero da conta: ");
    scanf ("%d", &numero);

    for (int i = 0; i < total_Contas; i++){
        if (numero == contas[i].numero){
            printf ("---DADOS---\n");
            printf ("Numero: %d\n", contas[i].numero);
            printf ("Nome: %s\n", contas[i].nome);
            printf ("Saldo: %.2f\n\n", contas[i].saldo);
        }
    }
}

    
    
int main(){
    Conta contas[Max_Contas];
    int opcao;
    do{ 
        opcao = mostrarMenu();
        
        if (opcao == 0){
            printf ("Saindo do sistema...\n") ;
            break;
        }
        else{
            switch (opcao){

            case 1:
                criarConta (contas);
                break;
            case 2:
                exibirConta (contas);
                break;
            case 3:
                depositar (contas);
                break;
            case 4:
                sacar (contas);
                break;
            case 5:
                buscarConta (contas);
                break;
            default:
                printf("Opção Inválida!\n");
                break;
        }
      }

    } while (opcao != 0);
    return 0;
}