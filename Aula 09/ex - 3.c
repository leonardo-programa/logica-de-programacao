#include <stdio.h>

int main (){
    int n;

    printf ("Digite o valor de N: ");
    scanf ("%d", &n);
    
    for (int contador = 0; contador <= n; contador++){
        if (contador % 2 == 0){
            printf ("%d ", contador);
        }
    }
}