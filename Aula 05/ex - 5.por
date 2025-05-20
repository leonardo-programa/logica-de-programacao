programa {
  inteiro a, b, operacao
  funcao inicio() {
    
    escreva ("Atenção! as operações serão realizadas na ordem que os números forem colocados\n\n")

    escreva ("Digite o primeiro número: ")
    leia (a)
    escreva ("Digite o segundo número: ")
    leia (b)

    escreva ("\n--- Operação ---\n")
    escreva ("1 - soma\n")
    escreva ("2 - subtração\n")
    escreva ("3 - multiplicação\n")
    escreva ("4 - divisão\n")
    escreva ("----------------\n\n")

    escreva ("Digite a operação: ")
    leia (operacao)
    escreva ("\n")

    se (operacao != 1 e operacao != 2 e operacao != 3 e operacao != 4){
      escreva ("Operador inválido")
    }
    senao se (operacao == 1){
      somar ()
    }
    senao se (operacao == 2){
      subtrair ()
    }
    senao se (operacao == 3){
      multiplicar ()
    }
    senao {
      dividir ()
    }
  }
  funcao somar (){
    escreva ("A soma é: ", a + b)
  }
    funcao subtrair (){
    escreva ("A subtraação é: ", a - b)
  }
    funcao multiplicar (){
    escreva ("A multiplicação é: ", a * b)
  }
    funcao dividir (){
    escreva ("A divisão é: ", a / b)
  }
}
