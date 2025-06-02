#include <stdio.h>

int main(){
    int numeros [5];

    for (int i = 0; i < 5; i++){
        printf ("Digite um numero na posicao %i do array: ", i + 1);
        scanf ("%i", &numeros[i]);
    }
    for (int i = 4; i >= 0; i--){
        printf ("Numero %i: %i\n", i + 1, numeros [i]);
    }
}