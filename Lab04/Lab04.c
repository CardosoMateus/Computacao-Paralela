#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <sys/wait.h>

#define KEY 319

int main() {
	int shmid;
	int* shmptr;
	pid_t pid;
	char* path = "./";
	int status;

	int valor = 1;
	printf("(Processo Pai) valor = %d\n", valor);

	shmid = shmget(ftok(path, KEY), sizeof(int), IPC_CREAT | SHM_R | SHM_W);
	if (shmid == -1) {
		perror("Erro no shmget()");
		exit(1);
	}

	shmptr = (int*) shmat(shmid, NULL, 0);
	if(shmptr == NULL) {
		perror("Erro no shmat");
		exit(1);
	}

	shmptr[0] = valor;

	pid = fork();
	if(pid < 0) {
		perror("Erro no fork");
		exit(1);
	}

	else if (pid == 0) {
		shmptr[0] += 2;
		printf("(Processo Filho) o novo valor = %d\n", shmptr[0]);
		exit(0);
	}

	wait(&status);
	shmptr[0] = shmptr[0] * 4;
	printf("(Processo Pai) o valor final = %d\n", shmptr[0]);
	exit(0);
}

