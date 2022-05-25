#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void Taylor(double* result, long t);

int main(int argc, char* argv[]) {
	double ln = 0.0;
	double time, start;

	/* Le o numero o valor a ser calculado */
	long t = strtol(argv[1], NULL, 10);

	/* Le o numero de trhreads */
	long thread_count = strtol(argv[2], NULL, 10);

	start = omp_get_wtime();
#	pragma omp parallel num_threads(thread_count)
	{
		Taylor(&ln, t);
	}
	time = omp_get_wtime() - start;
	printf("ln(%ld) = %.12f\n", t, ln);
	printf("em %.6f segundo(s)\n", time);
}

void Taylor(double* result, long t) {
	long i;
	int my_rank = omp_get_thread_num();
	int thread_count = omp_get_num_threads();

	long my_t = t / thread_count;
	long my_first_i = my_t * my_rank;
	long my_last_i = my_first_i + my_t;

	double my_result = 0.0;
	double aux;

#	pragma omp parallel for num_threads(thread_count) reduction(+: my_result)
	for (i = my_first_i; i < my_last_i; i++) {
		aux = (double) i;
		my_result += 1.0 / (aux + 1.0);
	}

	*result += my_result;
}

