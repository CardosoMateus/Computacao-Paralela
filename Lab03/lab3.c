#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
	char nome[50];
	int idade;
	float altura;
};

int getDados(struct pessoa povo[10], FILE *Arg) {
	char data[50];
	int i = 0;
	while(fgets(data, 50, Arg) != NULL) {
		if (i % 3 == 0) 
			strcpy(povo[i/3].nome, data);
		else if (i % 3 == 1) 
			povo[i/3].idade = atoi(data);
		else if (i % 3 == 2) 
			povo[i/3].altura = atof(data);
		i++;
		if (i/3 > 10) break;
	}
	return (i / 3) + 1;
}

void setDados(struct pessoa povo[10], int tam, FILE *output) {
	int i = 0;
	while(i < tam) {
		fprintf(output,"%s", povo[i].nome);
		fprintf(output,"%d", povo[i].idade);
		fprintf(output,"%f", povo[i].altura);
		i++;
	}
}

int comparaAltura(const void *a, const void *b) {
	float x = ((struct pessoa *)a)->altura;
	float y = ((struct pessoa *)b)->altura;
	return (x - y);
}

int main() {
	char S1[50];
	struct pessoa povo[10];
	FILE *Arg;
	FILE *output;
	int tam;

	Arg = fopen("Pessoas.txt", "r");
	if (Arg == NULL) printf("Erro na leitura do arquivo.\n");

	else {
		tam = getDados(povo, Arg);
		fclose(Arg);

		qsort(povo, tam, sizeof(float), comparaAltura);

		printf("Data successfully gets read from the file Pessoa.txt\n");
		printf("The file then gets closed\n");

		output = fopen("Output.txt", "w");
		if (output == NULL) printf("Erro na criacao do arquivo de saida.\n");

		else {
			setDados(povo, tam, output);
			fclose(output);
			printf("Arquivo de saida criado.\n");
		}
	}
	return 0;
}
