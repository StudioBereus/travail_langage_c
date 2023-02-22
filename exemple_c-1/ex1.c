#include <stdio.h>
#include <math.h>
#define Nfois 5

int main() {
	int i;
	float x, racX; 

	printf("Bonjour ! \nJe vais vous calculer %d racines carrees\n", Nfois);
	for (i = 0; i < Nfois; i++) {
		printf("Donnez un nombre :");
		scanf_s("%f", &x);
		if (x < 0.0) {
			printf("Le nombre %f ne possede pas de racines carrees");
		}
		else {
			racX = sqrt(x);
			printf("Le nombre %f a pour racine carree : %f\n", x, racX);
		}
	}
	printf("Travail termine");
}
