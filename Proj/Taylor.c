#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int N = atoi(argv[1]);
	double ln = 0.0;
	int i;
	double aux;

	for (i = 0; i < N; i++) {
		double aux = (double) i;
		aux = 1 / (1 + aux);
		ln = ln + aux;
	}

	printf("ln(%d) = %f10\n", N, ln);
	return 0;
}
