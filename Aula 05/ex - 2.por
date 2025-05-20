programa {
  
  cadeia nome
  inteiro idade
  
  funcao inicio() {

    escreva ("Digite seu nome: ")
    leia (nome)

    escreva ("Digite sua idade: ")
    leia (idade)

    mensagemPersonalizada ()

  }
  funcao mensagemPersonalizada (){
    escreva ("Olá, ", nome, ", você tem ", idade, " anos. Seja bem-vindo(a)!")
  }
}
