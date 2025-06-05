#include <stdio.h>
#include <string.h>

int main(){
    char palavra1 [50], palavra2 [50], palavra3 [50];

    printf ("Palavra 1: ");
    scanf ("%s", palavra1);
    
    printf ("Palavra 2: ");
    scanf ("%s", palavra2);

    printf ("Palavra 3: ");
    scanf ("%s", palavra3);

    printf ("ORDEM INVERSA: \n");
    
    printf ("%s\n", palavra3);
    printf ("%s\n", palavra2);
    printf ("%s", palavra1);

    return 0;
}

