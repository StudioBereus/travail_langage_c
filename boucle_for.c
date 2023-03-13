#include<math.h>
#include<stdio.h>

int main() {
	int nb, i, sum = 0;
	printf("Veuillez entrer un chiffre\n");
	scanf_s("%d", &nb);
	for (i = 0; i <= nb; i++) {
		sum += i;
	}
	printf("%i", sum);
}