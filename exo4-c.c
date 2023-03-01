#include<math.h>
#include<stdio.h>

//Ecrire un programme qui détermine si un nombre entier est pair ou non.
int main() {
	int nb;
	printf("Veuillez entrer un nombre entier");
	scanf_s("%i", &nb);
	if (nb % 2 == 0) {
		printf("Le nombre %i est pair.", nb);
	}
	else {
		printf("Le nombre %i est impair", nb);
	}
}