#include <stdio.h>
#include <string.h>

int main() {
	char nome1[20], nome2[20], first[20], second[20];
	printf("Digite um nome: ");
	scanf("%s", nome1);
	printf("Digite outro nome: ");
	scanf("%s", nome2);

	if (strcmp(nome1, nome2) < 0) {
		strcpy(first, nome1);
		strcpy(second, nome2);
	}

	else {
		strcpy(first, nome2);
		strcpy(second, nome1);
	}
	printf("Em ordem alfabetica:\n");
	printf("%s\n", first);
	printf("%s\n", second);
}
