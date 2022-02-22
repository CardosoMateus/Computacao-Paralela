#include <stdio.h>
#define n 3

void modMatriz(int matriz[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (matriz[i][j] < 0) {
				matriz[i][j] = matriz[i][j] * (-1);
			}
		}
	}
}

int main() {
	int i, j;
	int exemplo[n][n] = {1, 6, -9, -21, 5, -1, -7, 7, 0};
	
	printf("Matriz exemplo:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", exemplo[i][j]);
			if (j == n-1) {
				printf("\n");
			}
		}
	}

	modMatriz(exemplo);
	printf("Apos aplicar a funcao:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", exemplo[i][j]);
			if (j == n-1) {
				printf("\n");
			}
		}
	}
	return 0;
}

