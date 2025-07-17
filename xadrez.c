#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorreRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainhaRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// Função recursiva + loops aninhados para o Bispo
void moverBispoComLoopsERecursao(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    for (int i = 0; i < 1; i++) { // Simula uma unidade de movimento vertical
        for (int j = 0; j < 1; j++) { // Simula uma unidade de movimento horizontal
            printf("Cima, Direita\n");
        }
    }

    moverBispoComLoopsERecursao(vertical - 1, horizontal - 1);
}

// Movimento do Cavalo com loops aninhados e lógica avançada (2 cima + 1 direita)
void moverCavaloAvancado() {
    printf("\nMovimento do Cavalo (2 casas para cima, 1 para a direita):\n");

    // Movimento vertical (duas casas para cima)
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    // Movimento horizontal (uma casa para a direita)
    for (int j = 0; j < 2; j++) {
        if (j == 1) break;
        printf("Direita\n");
    }
}
int main() {
    // Constantes de movimento
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Movimento da Torre (Recursivo)
    printf("Movimento da Torre:\n");
    moverTorreRecursivo(casasTorre);

    // Movimento do Bispo (Recursivo + Loops Aninhados)
    printf("\nMovimento do Bispo:\n");
    moverBispoComLoopsERecursao(casasBispo, casasBispo);

    // Movimento da Rainha (Recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursivo(casasRainha);

    // Movimento do Cavalo (Loops Avançados)
    moverCavaloAvancado();

    return 0;
}
