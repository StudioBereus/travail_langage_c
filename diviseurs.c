#include <math.h>
#include <stdio.h>

//Ecrire un programme qui affiche tous les diviseurs d'un nombre donne
int main() {
	int nb;
	printf("Entrez un nombre \n");
	scanf_s("%i", &nb);
	if (nb > 1) {
		for (int i = 2; i < nb; i++) {
			if (nb % i == 0) {
				printf("%i ", i);
			}
		}
	}
}