programa {

  funcao inicio() {
    inteiro ano
    escreva ("Digite o ano: ")
    leia (ano)

    ehBissexto(ano)
  }
  funcao ehBissexto (inteiro ano){
    se (ano % 400 == 0 ou (ano % 4 == 0 e ano % 100 != 0)){
      escreva ("É bissexto.")
    }
    senao {
      escreva ("Não é bissexto.")
    }
  }
}
