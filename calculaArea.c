/*
Programa: Calcula o dobro de qualquer número digitado
Autor: Roger B. Trevisan, Otavio N. Almeida e Leticia Cafe
*/
#include <stdio.h>
#include "funcoes.c"

int main() {
    float largura, comprimento, area;

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    area = calcularArea(largura, comprimento);

    printf("A area total do terreno eh: %.2f m²\n", area);

    return 0;
}

