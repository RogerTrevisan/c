float calcularDobro(float num) {
    return num * 2;
}

float calcularArea(float largura, float comprimento) {
    return largura * comprimento;
}

void encontrarMaiorMenor(int nums[], int tam, int *maior, int *menor) {
    *maior = nums[0];
    *menor = nums[0];
    int i;
	for (i = 1; i < tam; i++) {
        if (nums[i] > *maior) {
            *maior = nums[i];
        }
        if (nums[i] < *menor) {
            *menor = nums[i];
        }
    }
}

