#include <stdio.h>

int main (){
    int idade;

    printf ("Qual sua idade? ");
    scanf ("%d", &idade);

    if (idade < 0 || idade > 140){
        printf ("Mentiroooso!");
    }
    else if (idade >= 60){
        printf ("Voce eh idoso.");
    }
    else if (idade >= 18){
        printf ("Voce eh maior de idade.");
    }
    else{
        printf ("Voce eh menor de idade");
    }
}