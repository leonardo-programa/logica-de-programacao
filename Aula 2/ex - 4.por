programa {
  funcao inicio() {
    real a1, a2, a3
    
    escreva ("Digite o primeiro angulo: ")
    leia (a1)
    escreva ("Digite o segundo angulo: ")
    leia (a2)

    a3 = 180 - (a1 + a2)
    escreva ("O terceiro angulo do triangulo eh: ", a3, " graus")
  }
}
