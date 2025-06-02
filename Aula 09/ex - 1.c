#include <stdio.h>

int main(){
    int idade;
    char nome[20];
    float nota;

    printf ("Qual seu nome? ");
    scanf ("%s", nome);
    printf ("Qual sua idade? ");
    scanf ("%d", &idade);
    printf ("Qual sua nota? ");
    scanf ("%f", &nota);

    printf ("\nAluno: %s\n", nome);
    printf ("Idade: %d\n", idade);
    printf ("Nota: %.2f\n", nota);

    
    return 0;
}