#include <stdio.h>

int main(){
    FILE *arquivo = fopen("usuarios.txt", "w");

    if (arquivo == NULL){
        printf ("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char nome[50], gmail[100]; int idade;

    printf ("Digite seu nome: ");

    scanf("%29[^\n]", nome);

    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    getchar();

    printf ("Digite seu gmail: ");
    scanf ("%99[^\n]", gmail);


    fprintf(arquivo, "%s, %d, %s", nome, idade, gmail);

    fclose (arquivo);

    arquivo = fopen("usuarios.txt", "r");

    char Nome2[50], gmail2[100]; int idade2; 

    fscanf (arquivo, "%49[^,],%d,%99[^\n]", nome, &idade, gmail);

    printf ("\nNome: %s \nIdade: %d \ngmail: %s", nome, idade, gmail);
    fclose(arquivo);

    return 0;
}
