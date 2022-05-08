#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

double ln = 0.0;
long thread_count;
long N;

void* Taylor(void* rank);

int main(int argc, char* argv[]) {
	long t;

	// Le o valor de N da linha de comando
	N = strtol(argv[1], NULL, 10);
	
	// Le o numero de threads da linha de comando
	thread_count = strtol(argv[2], NULL, 10);

	pthread_t* thread_handles;
	thread_handles = malloc(thread_count * sizeof(pthread_t));

	for (t = 0; t < thread_count; t++) 
		pthread_create(&thread_handles[t], NULL, Taylor, (void*) t);

	for (t = 0; t < thread_count; t++) 
		pthread_join(thread_handles[t], NULL);

	printf("ln(%ld) = %f10\n", N, ln);

	free(thread_handles);
	return 0;
}

void *Taylor(void* rank) {
	long my_rank = (long) rank;
	long my_n = N / thread_count;
	long my_first_i = my_n * my_rank;
	long my_last_i = my_first_i + my_n;
	long i;
	double aux;

	for (i = my_first_i; i < my_last_i; i++) {
		aux = (double) i;
		ln += 1.0 / (aux + 1.0);
	}

	return NULL;
}
