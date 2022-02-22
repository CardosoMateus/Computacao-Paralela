#include <stdio.h>

int main () {
	float N1, N2, N3, At;
	printf("Digite as notas do aluno e a media das atividades, nessa ordem: ");
	scanf("%2f %2f %2f %2f\n", &N1, &N2, &N3, &At);

	float media;
	media = (N1 + 2*N2 + 3*N3 + At) / 7;
	if (media >= 9.0) printf("Conceito A\n");
	else if (media >= 7.5) printf("Conceito B\n");
	else if (media >= 6.0) printf("Conceito C\n");
	else if (media >= 4.0) printf("Conceito D\n");
	else if (media >= 0.0) printf("Conceito E\n");

	return 0;
}
