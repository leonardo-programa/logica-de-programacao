programa {
  funcao inicio() {
    real produto, desconto, parcela, comissaoVista, comissaoParcela

    escreva ("Digite o valor do produto: ")
    leia (produto)

    desconto = 0.9 * produto
    parcela = produto / 3
    comissaoVista = 0.05 * desconto
    comissaoParcela = 0.05 * produto

    escreva ("\nValor com 10% de desconto: ", desconto, "\n")
    escreva ("Valor de cada parcela (3x sem juros): ", parcela, "\n")
    escreva ("Comissão do vendedor (a vista): ", comissaoVista, "\n")
    escreva ("Comissão do vendedor (parcelado): ", comissaoParcela, "\n")
  }
}
