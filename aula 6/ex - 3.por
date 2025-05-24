programa {
  funcao inicio() {
    inteiro n

    escreva ("Digite o valor de N: ")
    leia (n)

    escreva ("A soma dos ", n, " primeiros numeros naturais eh: ", somaNaturais(n))
  }
  funcao inteiro somaNaturais (inteiro n){
    se (n == 1) {
      retorne 1
    }
    senao {
      inteiro soma = n + somaNaturais(n-1)
      retorne soma
    }
  }
}
