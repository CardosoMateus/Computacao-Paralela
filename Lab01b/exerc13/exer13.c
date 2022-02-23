#include <stdio.h>
#include <string.h>
#define n 100

void deleteChar(char str[n], int pos, int comp) {
	int i;
	for (i = pos; i < comp; i++) {
		str[i] = str[i+1];
	}
}

int main() {
	char str[n];
	int pos;
	printf("Digite uma string: ");
	scanf("%s", str);
	printf("Digite a posicao do caracter: ");
	scanf("%d", &pos);
	int comp = strlen(str);
	deleteChar(str, pos, comp);
	printf("A string apos deletar: %s", str);
	printf("\n");
	return 0;
}
