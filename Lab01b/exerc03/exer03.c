#include <stdio.h>

int main() {
	int n;
	printf("Digite o numero maximo: ");
	scanf("%d", &n);
	if (n%2 == 0) {
		printf("O numero tem de ser impar: ");
		while (n%2 == 0) {
			scanf("%d", &n);
		}
	}
	printf("\n");
	for (int i = 1; i < n+1; i++) {
		printf("%d ", i);
	}
	printf("\n");

	int aux = 0;
	for (int j = 1; j < (n/2)+1; j++) {
		for (int k = 1; k < n+1; k++) {
			if (k <= j || k > n-j) {
				printf("  ");
			}
			else printf("%d ", k);
		}
		printf("\n");
	}
}
