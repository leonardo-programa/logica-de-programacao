programa {
  funcao inicio() {
    inteiro anoNascimento, anoAtual, idade

    escreva ("Digite o ano de nascimento: ")
    leia (anoNascimento)

    escreva ("Digite o ano atual: ")
    leia (anoAtual)

    idade = anoAtual - anoNascimento

    se (idade >= 18){
      escreva ("Você completa ", idade, " anos em ", anoAtual, " e poderá tirar a habilitação.")
    }
    senao {
      escreva ("Você completa ", idade, " anos em ", anoAtual, " e ainda não poderá tirar a habilitação.")
    }
  }
}
