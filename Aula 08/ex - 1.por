programa {
  funcao inicio() {
    inteiro numeros [3][3], soma = 0

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        inteiro numero
        escreva ("Digite um numero na posição [", i, "][", j, "]: ")
        leia (numero)
        numeros [i][j] = numero

        soma += numeros [i][j]
      }
    }
    escreva ("A soma dos valores eh: ", soma)
  }
}
