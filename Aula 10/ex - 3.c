#include <stdio.h>
#include <string.h>

int main(){
    char frase1 [41], frase2 [41];

    printf ("Digite a primeira frase: ");
    fgets (frase1, sizeof(frase1), stdin);
    frase1 [strcspn(frase1, "\n")] = '\0';

    printf ("Digite a segunda frase: ");
    fgets (frase2, sizeof(frase2), stdin);

    strcat (frase1, " ");
    strcat (frase1, frase2);
    
    printf ("frase resultante: %s", frase1);

    return 0;
}