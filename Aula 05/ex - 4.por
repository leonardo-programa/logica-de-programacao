programa {

  funcao inicio() {
    inteiro ano

    escreva ("Digite o ano: ")
    leia (ano)

    se (ehBissexto(ano)){
      escreva (ano, " é bissexto.\n")
    }
    senao {
      escreva (ano, " não é bissexto.")
    }
  }
  funcao logico ehBissexto (inteiro ano){
      retorne (ano % 400 == 0) ou (ano % 4 == 0 e ano % 100 != 0)

  }
}
