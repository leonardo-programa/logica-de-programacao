#include <stdio.h>

int main (){
    int soma = 0;
    while (1){
        int numero;

        printf ("Escreva um numero: ");
        scanf ("%d", &numero);

        if (numero == 0){
            break;
        }
        else{
            soma += numero;
        }
    }
    printf ("A soma foi: %d", soma);
}