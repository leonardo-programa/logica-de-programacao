#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
};

void exibirpessoa (struct Pessoa pessoas){
    printf ("\nSeu Dados: \n");
    printf ("Nome: %s\n", pessoas.nome);
    printf ("Idade: %d", pessoas.idade);
}

int main(){
    struct Pessoa pessoas;
    printf ("Digite seu nome: ");
    scanf ("%s", pessoas.nome);
    printf ("Digite sua idade: ");
    scanf ("%d", &pessoas.idade);

    exibirpessoa(pessoas);

    return 0;
}