programa {
  funcao inicio() {
    inteiro n, soma = 0

    escreva ("Digite um número: ")
    leia (n)

    para (inteiro contador = 1; contador <= n; contador++){
      se (contador % 2 == 0){
        soma += contador
      }
    }

    escreva ("A soma dos numeros pares de 1 até ", n, " é: " , soma)
  }
}
