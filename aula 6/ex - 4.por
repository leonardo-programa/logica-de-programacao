programa {
  funcao inicio() {
    inteiro a, b

    escreva ("Digite o valor de a: ")
    leia (a)
    escreva ("Digite o valor de b: ")
    leia (b)

    escreva ("O resultado de a vezes b eh: ", multiplicacao(a, b))

  }
  funcao inteiro multiplicacao (inteiro a, inteiro b) {
    se (b == 1){
      retorne a
    }
    senao {
      inteiro resultado = a + multiplicacao (a, b-1)
      retorne resultado
    }
  }
}
