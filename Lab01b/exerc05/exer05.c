#include <stdio.h>

void MultValorLin(int lin, int col, int valor, int matriz[lin][col], int linha) {
	for (int i = 0; i < col; i++) {
		matriz[linha][i] = matriz[linha][i] * valor;
	}
}

void MultValorCol(int lin, int col, int valor, int matriz[lin][col], int coluna) {
	for (int i = 0; i < lin; i++) {
		matriz[i][coluna] = matriz[i][coluna] * valor;
	}
}

int main() {
	int lin, col;

	printf("Digite o numero de linhas: ");
	scanf("%d", &lin);
	printf("Digite o numero de colunas: ");
	scanf("%d", &col);

	int matriz[lin][col];

	printf("Digite os elementos:\n");
	int i, j;
	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			printf("Linha %d e coluna %d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	int valor, linha, coluna;
	
	printf("Digite a linha que deseja multiplicar: ");
	scanf("%d", &linha);
	
	printf("Digite o valor: ");
	scanf("%d", &valor);

	MultValorLin(lin, col, valor, matriz, linha);

	printf("O resultado e:\n");
	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", matriz[i][j]);

			if (j == col-1) {
				printf("\n");
			}
		}
	}
	printf("Digite a coluna que deseja multiplicar: ");
	scanf("%d", &coluna);

	printf("Digite o valor: ");
	scanf("%d", &valor);

	MultValorCol(lin, col, valor, matriz, coluna);

	printf("O resultado e:\n");
	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			printf("%d", matriz[i][j]);

			if (j == col-1) {
				printf("\n");
			}
		}
	}

	return 0;
}
