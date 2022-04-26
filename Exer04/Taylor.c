#include <stdio.h>

#define N 10

int main() {
	double ln = 0.0;
	int i;
	double aux;

	for (i = 0; i < N; i++) {
		aux = (double) 1 / (i + 1);
		ln = ln + aux;
	}

	printf("ln(10) = %f10\n", ln);
	return 0;
}
