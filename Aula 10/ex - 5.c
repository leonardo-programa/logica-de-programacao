#include <stdio.h>
#include <string.h>
int main(){
    char palavra[50];
    int palindromo = 0;

    printf ("Digite uma palavra: ");
    scanf("%s", palavra);

    for(int i = 0; i <= strlen(palavra) - 1; i++){
        for (int j = strlen(palavra) - 1; j >= 0; j--){
            if (palavra[i] == palavra[j]){
                palindromo = 1;
            }
            else {
                palindromo = 0;
            }
        }
    }

    if (palindromo == 1){
        printf ("eh palindromo");
    }
    else {
        printf ("nao eh palindromo");
    }

    return 0;
}