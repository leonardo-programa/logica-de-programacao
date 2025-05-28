programa {
  funcao inicio() {
    inteiro numeros[3][3], maior = 0, menor = 100000

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        inteiro numero

        escreva ("Digite um numero na posição [", i, "][", j, "]: ")
        leia (numero)
        numeros[i][j] = numero

        se (numeros[i][j] > maior){
          maior = numeros[i][j]
        }
        se (numeros[i][j] < menor){
          menor = numeros[i][j]
        }
      }
    }
    escreva ("\nO menor numero foi: ", menor)
    escreva ("\nO maior numero foi: ", maior)
  }
}
