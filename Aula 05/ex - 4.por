programa {
  inteiro ano
  funcao inicio() {

    escreva ("Digite o ano: ")
    leia (ano)

    ehBissexto()
  }
  funcao ehBissexto (){
    se (ano % 400 == 0 ou (ano % 4 == 0 e ano % 100 != 0)){
      escreva ("É bissexto.")
    }
    senao {
      escreva ("Não é bissexto.")
    }
  }
}
