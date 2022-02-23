#include <stdio.h>

void matrizTransposta(int lin, int col, int matriz[lin][col], int transp[col][lin]) {
	int i, j;
	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			transp[j][i] = matriz[i][j];
		}
	}
}

int main() {
	int lin, col;
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d", &lin);
	printf("Digite o numero de colunas da matriz: ");
	scanf("%d", &col);

	int matriz[lin][col], transp[col][lin];
	int i, j;
	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			printf("Digite o valor da linha %d e coluna %d: ", lin, col);
			scanf("%d", &matriz[i][j]);
		}
	}
	matrizTransposta(lin, col, matriz, transp);

	printf("A matriz transposta e:\n");
	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", transp[i][j]);

			if (j == col-1) {
				printf("\n");
			}
		}
	}

	return 0;
}
