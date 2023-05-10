/*
Programa: Calcula o dobro de qualquer número digitado
Autor: Roger B. Trevisan, Otavio N. Almeida e Leticia Cafe
*/
#include <stdio.h>
#include "funcoes.c"

int main() {
    float numero, resultado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    resultado = calcularDobro(numero);

    printf("O dobro de %.2f eh: %.2f\n", numero, resultado);

    return 0;
}

