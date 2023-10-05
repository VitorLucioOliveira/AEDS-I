#include <stdio.h>
#include <stdbool.h>

#define MAX 500

int main() {
    int N, M;
    char w[MAX][MAX];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%s", w[i]);
    }

    for (int i = 0; i < N; i++) {
        if (i > 0) {
            for (int j = 0; j < M; j++) {
                // de cima para baixo
                if (w[i][j] == '.' && w[i - 1][j] == 'o') {
                    w[i][j] = 'o';
                }
            }
        }

        if (i < N - 1) {
            for (int j = M - 2; j >= 0; j--) {
                // para a esquerda
                if (w[i][j] == '.' && w[i][j + 1] == 'o' && w[i + 1][j + 1] == '#') {
                    w[i][j] = 'o';
                }
            }

            for (int j = 1; j < M; j++) {
                // para a direita
                if (w[i][j] == '.' && w[i][j - 1] == 'o' && w[i + 1][j - 1] == '#') {
                    w[i][j] = 'o';
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", w[i]);
    }

    return 0;
}
