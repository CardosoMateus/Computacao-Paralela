#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[50];
	int idade;
	float altura;
} pessoa;

int main() {
	char S1[50];
	char data[50];
	pessoa povo[10];
	FILE *Arg;
	int i;

	Arg = fopen("Pessoas.txt", "r");
	if (Arg == NULL) printf("Erro na leitura do arquivo.\n");

	else {
		while (fgets(data, 50, Arg) != NULL) {
			if (i % 3 == 0) {
				strcpy(povo[i].nome, data);
			}

			else if (i % 3 == 1) {
				povo[i].idade = atoi(data);
			}

			else if (i % 3 == 2) {
				povo[i].altura = atof(data);
			}
			i++;
		}
		fclose(Arg);
		printf("Data successfully gets read from the file Pessoa.txt\n");
		printf("The file then gets closed");
	}
	return 0;
}
