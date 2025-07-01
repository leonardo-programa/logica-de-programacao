#include <stdio.h>

int main(){
    FILE *arquivo = fopen("usuarios.txt", "w");

    if (arquivo == NULL){
        printf ("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char nome[30], gmail[30]; int idade;
    printf ("Digite seu nome: ");
    fgets(nome, sizeof(nome), arquivo);
    

    fprintf(arquivo, "Nome: %s, Idade: %d, Gmail: %[^/n]", nome, idade, gmail);
    fclose (arquivo);
}