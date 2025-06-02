#include <stdio.h>

int main (){
    int numeros [2][2], soma = 0;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf ("Digite o numero na posicao [%i][%i]: ", i, j);
            scanf ("%d", &numeros[i][j]);
            soma += numeros [i][j];
        }
    }

    printf ("Soma: %i", soma);
}