#include <stdio.h>

int main(){
    int numero, numeroNovo;
    int *ponteiro = &numero;

    printf ("Digite o numero original: ");
    scanf ("%d", &numero);
    printf ("Digite o numero novo: ");
    scanf ("%d", &numeroNovo);

    printf ("Valor original: %d\n", numero);

    *ponteiro = numeroNovo;

    printf ("Valor modificado via ponteiro: %d", numero);
    return 0;
}