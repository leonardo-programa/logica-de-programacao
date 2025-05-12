programa {
  funcao inicio() {
    
    inteiro idade

    escreva ("Qual sua idade? ")
    leia (idade)


    se (idade > 150 ou idade < 0){
      escreva ("Não precisa mentir.")
    }
    senao se (idade >= 65){
      escreva ("Você é um idoso.")
    }
    senao se (idade >= 18){
      escreva ("Você é um adulto.")
    }
    senao se (idade >= 13){
      escreva ("Você é um adolescente.")
    }
    senao{
      escreva ("Você é uma criança.")
    }
  }
}
