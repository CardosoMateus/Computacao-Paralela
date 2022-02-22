#include <stdio.h>
#define N 3

int menor(int A[N][N]) {
	int menor = A[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i][j] < menor) {
				menor = A[i][j];
			}
		}
	}

	return menor;
}

int main() {
	int matriz[N][N];
	printf("Digite nos espacos abaixo 9 valores para inserir na matriz:\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("O menor valor da matriz e: ");
	printf("%d\n", menor(matriz));
	return 0;
}
