#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[50];
    int numero;
    char cidade[50];
} Endereco;

struct Funcionario {
    char nome[50];
    char cargo[50];
    Endereco endereco;
};

int main() {
    struct Funcionario funcionarios[2];

    printf("\n--- CADASTRO ---");

    for (int i = 0; i < 2; i++) {
        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = 0; // remove '\n'

        printf("Cargo: ");
        fgets(funcionarios[i].cargo, sizeof(funcionarios[i].cargo), stdin);
        funcionarios[i].cargo[strcspn(funcionarios[i].cargo, "\n")] = 0;

        printf("Rua: ");
        fgets(funcionarios[i].endereco.rua, sizeof(funcionarios[i].endereco.rua), stdin);
        funcionarios[i].endereco.rua[strcspn(funcionarios[i].endereco.rua, "\n")] = 0;

        printf("Numero: ");
        scanf("%d", &funcionarios[i].endereco.numero);
        getchar();

        printf("Cidade: ");
        scanf ("%49[^\n]", funcionarios[i].endereco.cidade);
        getchar();
    }

    printf("------------ DADOS FUNCIONARIOS ------------\n");

    for (int i = 0; i < 2; i++) {
        printf("Funcionario: %s\n", funcionarios[i].nome);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Endereco: %s, %d - %s\n\n", funcionarios[i].endereco.rua, funcionarios[i].endereco.numero, funcionarios[i].endereco.cidade);
    }
    return 0;
}
