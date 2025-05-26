programa {
  funcao inicio() {
  inteiro numeros [10], soma = 0

  para (inteiro i = 0; i < 10; i++){
      escreva ("Digite o valor ", i + 1, ": ")
      leia (numeros[i])

      soma += numeros[i]
  }
  escreva ("A soma dos valores eh: ", soma)
  }
}
