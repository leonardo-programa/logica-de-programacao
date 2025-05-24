programa {
  funcao inicio() {
    inteiro n

    escreva ("Digite o valor de N: ")
    leia (n)
    contagem (n)
  }
  funcao contagem (inteiro n){
    se (n != 0){
      escreva (n, " ")
      contagem (n-1)
    }
    senao {
      escreva ("\nAcabou")
    }
  }
}
