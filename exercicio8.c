#include <stdio.h>

main(){

    /* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
    •Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos */

    int idade, tempoDeServico;

    printf("digite a idade: ");
    scanf("%d", &idade);

    printf("digite o tempoDeServico: ");
    scanf("%d", &tempoDeServico);

    // Verifica as condições para a aposentadoria

    if (idade >= 65 || tempoDeServico >= 30 || (idade >= 60 && tempoDeServico >= 25)) {
        printf("O trabalhador pode se aposentar!\n");
    } else {
        printf("O trabalhador não pode se aposentar ainda.\n");
    }

    
}