#include <stdio.h>

int main(){
    FILE *arquivo = fopen("entrada.txt", "r");
    
    if (arquivo == NULL){
        printf ("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    char ch;
    int contador = 0;

    while ((ch = fgetc(arquivo)) != EOF){
        contador++;
    }

    fclose(arquivo);

    printf ("Quantidade de caracteres dentro do arquivo: %d", contador);
    return 0;
}