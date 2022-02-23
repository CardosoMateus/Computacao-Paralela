#include <stdio.h>
#include <string.h>
#define n 100

void deleteChar(char c, char str[n], int comp) {
	int i, j;
	for (i = 0; i < comp; i++) {
		if (str[i] == c) {
			for (j = i; j < comp; j++) {
				str[j] = str[j+1];
			}
		}
	}
}

int main() {
	char str[n];
	char c;
	int comp;

	printf("Digite a string: ");
	scanf("%s", str);

	printf("Digite o char que deseja deletar: ");
	scanf("%s", &c);

	comp = strlen(str);
	deleteChar(c, str, comp);
	printf("A string apos a remocao: %s", str);
	printf("\n");
}
