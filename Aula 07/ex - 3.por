programa {
  funcao inicio() {
    inteiro numeros [10], maior = 0, menor = 10000

    para (inteiro i = 0; i < 10; i++){
      escreva ("Digite o valor ", i + 1, ": ")
      leia (numeros [i])

      se (numeros [i] > maior){
        maior = numeros [i]
      }
      se (numeros [i] < menor){
        menor = numeros [i]
      }
    }
    escreva ("\nO maior numero foi: ", maior)
    escreva ("\nO menor numero foi: ", menor)
  }
}
