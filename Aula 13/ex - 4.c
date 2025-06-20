#include <stdio.h>
#include <string.h>

void classificarIMC(float peso, float altura, char *classificacao){
    float IMC = peso / (altura * altura);

    if (IMC < 18.5){
        strcpy (classificacao, "Abaixo do peso");
    }
    else if (IMC >= 18.5 && IMC < 24.9){
        strcpy (classificacao, "Peso Normal");
    }
    else if (IMC >= 25 && IMC < 29.9){
        strcpy(classificacao, "Sobrepeso");
    }
    else if (IMC >= 30 && IMC < 34.9){
        strcpy(classificacao, "Obesidade grau 1");
    }
    else if (IMC >= 35 && IMC < 39.9){
        strcpy(classificacao, "Obesidade grau 2");
       
    }
    else {
        strcpy(classificacao, "Obesidade grau 3");
    }
}

int main(){
    float peso, altura; char classificacao[50];

    printf ("Digite sua altura em M: ");
    scanf ("%f", &altura);
    printf ("Digite seu peso em KG: ");
    scanf ("%f", &peso);

    classificarIMC(peso, altura, classificacao);
    
    printf ("Classificacao: %s", classificacao);

    return 0;
}
