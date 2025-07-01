#include <stdio.h>

int main(){
    FILE *arquivo = fopen("notas.txt", "r");

    if (arquivo == NULL){
        printf ("Erro ao acessar o arquivo!\n");
        return 1;
    }

    int contador = 0;
    char linhas[50];

    while (fgets(linhas, sizeof(linhas), arquivo) != NULL){
        contador++;
    }

    fclose(arquivo);

    printf ("Quantidade de linhas dentro do arquivo: %d", contador);
    return 0; 
}