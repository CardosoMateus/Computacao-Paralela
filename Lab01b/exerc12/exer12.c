#include <stdio.h>
#define n 20

int charPos(char str[n], char c) {
	for (int i = 0; i < n; i++) {
		if (str[i] == c) return i;
	}

	return -1;
}

int main() {
	char str[n] = "Mateus";
	char c;
	printf("Digite o caracter: ");
	scanf("%c", &c);
	int pos;
	pos = charPos(str, c);

	if (pos == -1) {
		printf("O caracter nao esta na string.");
	}

	else {
		printf("O caracter esta na posicao %d.", pos);
	}
	printf("\n");
	return 0;
}
