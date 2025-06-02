#include <stdio.h>

int ehpar (int numero){
    if (numero % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int numero;
    
    printf ("Digite um numero: ");
    scanf ("%d", &numero);

    if (ehpar (numero) == 1){
        printf ("O numero eh par");
    }
    else {
        printf ("O numero eh impar");
    }

}