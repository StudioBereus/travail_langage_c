#include <math.h>
#include <stdio.h>

//Saisir les deux entiers et afficher leur produit
int main() {
	int nb1, nb2, produit;
	printf("Veuillez entrer un entier \n");
	scanf_s("%i", &nb1);
	printf("Veuillez entrer un deuxieme entier \n");
	scanf_s("%i", &nb2);
	produit = nb1 * nb2;
	printf("Le produit de ces deux entiers est: %i", produit);
}