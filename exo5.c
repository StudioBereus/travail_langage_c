#include<math.h>
#include<stdio.h>

//Ecrire un programme qui affiche le plus grand entier de trois chiffres entres
int main() {
	int a, b, c, max;
	printf("Veuillez entrer un premier nombre \n");
	scanf_s("%i", &a);
	printf("Veuillez entrer un deuxieme nombre \n");
	scanf_s("%i", &b);
	printf("Veuillez entrer un troisieme nombre \n");
	scanf_s("%i", &c);
	
	if (a >= b) {
		max = a;
	}
	else {
		max = b;
	}
	if (c >= max) {
		max = c;
	}
	printf("Le max est : %i", max);
}