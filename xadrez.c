#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jo
void moverTorreRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(vertical - 1, horizontal - 1);
}

// Nível Aventureiro - Cavalo com loops aninhados e condições avançadas
void moverCavaloAvancado() {
    printf("\nMovimento do Cavalo (2 casas para cima, 1 para a direita):\n");

    // Movimento vertical (2 casas para cima)
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    // Movimento horizontal (1 casa para a direita)
    int j = 0;
    while (j < 1) {
        printf("Direita\n");
        j++;
    }
}

int main() {
    // Nível Novato - Movimentação das Peças

    // Constantes de movimento
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorreRecursivo(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(casasBispo, casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursivo(casasRainha);

    // Nível Aventureiro - Movimento do Cavalo
    moverCavaloAvancado();

    return 0;
}

