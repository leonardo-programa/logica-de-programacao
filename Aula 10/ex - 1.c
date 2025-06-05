#include <stdio.h>
#include <string.h>

int main(){
    char palavra [50];

    printf ("Digite uma palavra, sem espacos ou caracteres especiais: ");
    scanf ("%s", palavra);

    if (strlen(palavra) >= 15){
        printf ("Palavra longa");
    }
    else if (strlen(palavra) >= 8 && strlen(palavra) < 15) {
        printf ("Palavra média");
    }
    else if (strlen(palavra) >= 5 && strlen(palavra) < 8){
        printf ("Palavra pequena");
    }
    return 0;
}