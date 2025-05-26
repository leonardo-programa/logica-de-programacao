programa {
  funcao inicio() {
    inteiro n, contador = 1

    escreva ("Digite N: ")
    leia (n)

    recursiva (contador, n)

  }
  funcao recursiva (inteiro contador, inteiro n) {
    
    se (contador <= n){
      escreva (contador, " ")
      contador++
      recursiva (contador, n)
    }
    senao {
      escreva ("\nAcabou")
    }
  }
}
