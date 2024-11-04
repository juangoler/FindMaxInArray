#include <stdio.h>

int main() {
    int numeros[10], maior, posicao;

    printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    posicao = 0;

    for(int i = 1; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
            posicao = i;
        }
    }

    printf("O maior número é %d na posição %d.\n", maior, posicao);
    return 0;
}
