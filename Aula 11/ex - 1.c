#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main(){
    struct Pessoa pessoa1;

    printf ("------- CADASTRO -------\n");
    printf ("Digite seu nome: ");
    scanf ("%49[^\n]", pessoa1.nome);
    printf ("Digite sua idade: ");
    scanf ("%d", &pessoa1.idade);
    printf ("------- -------- -------\n\n");

    printf ("---- DADOS ----\n");
    printf ("Nome: %s\n", pessoa1.nome);
    printf ("idade: %d", pessoa1.idade);

    return 0;
}