/*
Programa: Calcula o dobro de qualquer número digitado
Autor: Roger B. Trevisan, Otavio N. Almeida e Leticia Cafe
*/
#include <stdio.h>
#include "funcoes.c"

int main() {
    int 
		tam = 15,
		numeros[tam],
   		i,
    	maior, 
		menor;

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < tam; i++) {
        printf("Digite o %dº numero: ", i);
		scanf("%d", &numeros[i]);
    }

    encontrarMaiorMenor(numeros, tam, &maior, &menor);

    printf("O maior numero digitado foi %d e o menor numero digitado foi %d.\n", maior, menor);

    return 0;
}

