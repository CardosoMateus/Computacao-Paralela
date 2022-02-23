#include <stdio.h>
#define n 3

void somaLin(int matriz[n][n], int soma[n][n]) {
	int i;
	for (i = 0; i < n; i++) {
		soma[1][i] += matriz[0][i];
	}
}

void prodLin(int matriz[n][n], int prod[n][n]) {
	int i;
	for (i = 0; i < n; i++) {
		prod[1][i] *= matriz[0][i];
	}
}

int main() {
	int matriz[n][n] = {3, 5, 81, 22, 75, 43, 33, 16, 9};
	int soma[n][n] = {3, 5, 81, 22, 75, 43, 33, 16, 9};
	int prod[n][n] = {3, 5, 81, 22, 75, 43, 33, 16, 9};

	somaLin(matriz, soma);
	printf("A soma das duas linhas e:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", soma[i][j]);

			if (j == n-1) {
				printf("\n");
			}
		}
	}

	prodLin(matriz, prod);
	printf("O produto das duas linhas e:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", prod[i][j]);

			if (j == n-1) {
				printf("\n");
			}
		}
	}
	return 0;
}
