#include <stdio.h>

void calcular(float numero1, float numero2, float *soma, float *produto){
*soma = numero1 + numero2;
*produto = numero1 * numero2;
}

int main(){
    float numero1, numero2;
    float soma = 0, produto = 0;
    printf ("Digite o numero 1: ");
    scanf ("%f", &numero1);
    printf ("Digite o numero 2: ");
    scanf ("%f", &numero2);

    calcular(numero1, numero2, &soma, &produto);

    printf ("\nSoma: %.2f\n", soma);
    printf ("Produto: %.2f", produto);

    return 0;
}