programa {
  funcao inicio() {
    cadeia nome
    inteiro idade

    escreva ("Digite seu nome: ")
    leia (nome)

    escreva ("Digite sua idade: ")
    leia (idade)

    mensagemPersonalizada(nome, idade)

  }
  funcao mensagemPersonalizada(cadeia nome, inteiro idade){
    escreva ("Olá, ", nome, ", você tem ", idade, " anos. Seja bem-vindo(a)!")
  }
}
