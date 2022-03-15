#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int i, j, num;
	printf("Enter the number: ");
	scanf("%d", &num);
	j = num;

	for (i = 1; j > 1; j = j-1) {
		i = i*j;
	}

	printf("The facorial of %d is %d\n", num, i);
}
