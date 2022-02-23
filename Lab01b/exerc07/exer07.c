#include <stdio.h>
#define n 3

struct Pessoa {
	char nome[20];
	int idade;
	float altura;
	float peso;
};

int main() {
	struct Pessoa p1, p2, p3;
	struct Pessoa vet_p[n] = {p1, p2, p3};

	int i;
	for (i = 1; i < n+1; i++) {
		printf("Digite os dados da pessoa %d:\n", i);
		printf("Nome: ");
		scanf("%s", vet_p[i].nome);
		
		printf("Idade: ");
		scanf("%d", &vet_p[i].idade);

		printf("Altura (m): ");
		scanf("%f", &vet_p[i].altura);

		printf("Peso (Kg): ");
		scanf("%f", &vet_p[i].peso);
		printf("\n");
	}
	
	for (i = 0; i < n; i++) {
		printf("Os dados de %s sao: %d anos, %.2f metros, %.2f kg\n", vet_p[i].nome, vet_p[i].idade, vet_p[i].altura, vet_p[i].peso);
	}
}
