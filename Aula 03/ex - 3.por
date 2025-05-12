programa {
  funcao inicio() {
    inteiro operador, n1, n2

    escreva ("Os numeros vão ser ser calculados na ordem digitada\n")

    escreva ("Digite o primeiro número: ")
    leia (n1)
    escreva ("Digite o segundo número: ")
    leia (n2)

    escreva ("--- Operações ---")
    escreva ("\n1 - soma\n2 - subtração\n3 - multiplicação\n4 - divisão\n-----------------\n\n ")
    escreva ("Escolha uma operação: ")
    leia (operador)


    escolha (operador){
      caso 1:
        escreva ("O resultado é: ", n1 + n2)
        pare
      caso 2:
        escreva ("O resultado é: ", n1 - n2)
        pare
      caso 3:
        escreva ("O resultado é: ", n1 * n2)
        pare
      caso 4:
        se (n2 == 0){
          escreva ("Não é possivel dividir por zero")
          pare
        }
        escreva ("O resultado é: ", n1 / n2)
        pare
      caso contrario:
        escreva ("Operador inválido")

    }
  }
}
