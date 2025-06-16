#include <stdio.h>

void trocar (int *numero1, int *numero2){
    int guardanumero;

    guardanumero = *numero1;
    *numero1 = *numero2;
    *numero2 = guardanumero;
}
int main(){
    int numero1, numero2;
    
    printf ("Digite o valor 1: ");
    scanf ("%d", &numero1);

    printf ("Digite o valor 2: ");
    scanf ("%d", &numero2);
    printf ("\n");

    trocar(&numero1, &numero2);

    
    printf ("Valor 1: %d\n", numero1);
    printf ("Valor 2: %d\n", numero2);

    return 0;
}