#include <stdio.h>
char* classificarIMC(float peso, float altura){
    float IMC = peso / (altura * altura);

    if (IMC < 18.5){
        return "Abaixo do peso";
    }
    else if (IMC >= 18.5 && IMC < 24.9){
        return "Peso Normal";
    }
    else if (IMC >= 25 && IMC < 29.9){
        return "Sobrepeso";
    }
    else if (IMC >= 30 && IMC < 34.9){
        return "Obesidade grau 1";
    }
    else if (IMC >= 35 && IMC < 39.9){
        return "Obesidade grau 2";
       
    }
    else {
        return "Obesidade grau 3";
    }
}

int main(){
    float peso, altura;

    printf ("Digite sua altura em M: ");
    scanf ("%f", &altura);
    printf ("Digite seu peso em KG: ");
    scanf ("%f", &peso);

    printf ("Classificacao: %s", classificarIMC(peso, altura));

    return 0;
}
