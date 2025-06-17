#include <stdio.h>

// ===== FUNÇÕES RECURSIVAS (NÍVEL AVANÇADO) =====
void moverTorreRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverBispoRecursivo(int casas) {  // Corrigido o nome da função
    if (casas <= 0) return;
    printf("Cima, Direita\n");  // Corrigido "Direita"
    moverBispoRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// ===== FUNÇÕES COM LOOPS (NÍVEIS BÁSICO E INTERMEDIÁRIO) =====
void moverTorreLoop() {
    printf("Movimento da Torre (loop for):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
}

void moverBispoLoop() {
    printf("Movimento do Bispo (loop while):\n");
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
}

void moverRainhaLoop() {
    printf("Movimento da Rainha (loop do-while):\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
}

void moverCavaloBasico() {
    printf("Movimento do Cavalo (básico):\n");
    printf("Baixo\nBaixo\nEsquerda\n");
}

void moverCavaloAvancado() {
    printf("Movimento do Cavalo (avançado - 2 cima, 1 direita):\n");
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            continue;
        }
        printf("Direita\n");
    }
}

// ===== FUNÇÃO PRINCIPAL =====
int main() {
    // Nível básico
    printf("=== NÍVEL BÁSICO ===\n");
    moverTorreLoop();
    printf("\n");
    moverBispoLoop();
    printf("\n");
    moverRainhaLoop();
    printf("\n");
    moverCavaloBasico();
    printf("\n");

    // Nível intermediário
    printf("=== NÍVEL INTERMEDIÁRIO ===\n");
    moverCavaloBasico();
    printf("\n");

    // Nível avançado
    printf("=== NÍVEL AVANÇADO ===\n");
    printf("Movimento da Torre (recursivo):\n");
    moverTorreRecursivo(5);
    printf("\n");
    
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");
    
    printf("Movimento da Rainha (recursivo):\n");
    moverRainhaRecursivo(8);
    printf("\n");
    
    moverCavaloAvancado();
    printf("\n");

    return 0;
}