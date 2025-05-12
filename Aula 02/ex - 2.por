programa {
  funcao inicio() {
    real n1, n2
    real media
    cadeia nome

    escreva ("Qual o seu nome? ")
    leia (nome)

    escreva ("Qual a primeira nota? ")
    leia (n1)
    escreva ("Qual a segunda nota? ")
    leia (n2)

    media = (n1 + n2) / 2

    escreva ("O aluno ", nome, " obteve média final de: ", media)
  }
}
