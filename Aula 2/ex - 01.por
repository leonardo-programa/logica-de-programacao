programa {
  funcao inicio() {
    cadeia nome
    inteiro idade
    real altura
    caracter genero
    logico estudante

    escreva("Qual seu nome? ")
    leia (nome)
    escreva ("Qual sua idade? ")
    leia (idade)
    escreva ("Qual sua altura? ")
    leia (altura)
    escreva("Qual seu genero (M/F)? ")
    leia (genero)
    escreva ("Voce eh estudante? ")
    leia (estudante)

    escreva ("\nBem vindo(a), ", nome, "!", "\n")
    escreva ("Seu perfil\n")

    escreva ("nome: ", nome, "\n")
    escreva ("idade: ", idade, "\n")
    escreva ("altura: ", altura, "\n")
    escreva ("genero: ", genero, "\n")
    escreva ("eh estudante: ", estudante)
  }
}
