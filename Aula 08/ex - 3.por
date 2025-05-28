programa {
  funcao inicio() {
    inteiro numeros [2][2], somaColuna = 0

    para (inteiro i = 0; i < 2; i++){
      para (inteiro j = 0; j < 2; j++){
        inteiro numero

        escreva ("Digite um numero na posição [", i, "][", j, "]: ")
        leia (numero)
        numeros[i][j] = numero
      }
    
    }
    para (inteiro i = 0; i < 2; i++){
      inteiro somaLinha = 0

      para (inteiro j = 0; j < 2; j++) {
        somaLinha += numeros[i][j]
      }
      escreva("\nSoma da linha ", i, ": ", somaLinha)
    }
    escreva ("\n")
    para (inteiro j = 0; j < 2; j++){
      inteiro somaColuna = 0

      para (inteiro i = 0; i < 2; i++){
        somaColuna += numeros[i][j]
      }
      escreva ("\nSoma da coluna ", j, ": ", somaColuna)
    }
  }
}
