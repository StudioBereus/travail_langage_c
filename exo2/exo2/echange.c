#include <math.h>
#include <stdio.h>

//Inverser la valeur de deux nombres
int main() {
	int a, b, transit;
	printf("Veuillez saisir un nombre\n");
	scanf_s("%i", &a);
	printf("Veuillez saisir un autre\n");
	scanf_s("%i", &b);
	printf("%i et %i \n", a, b);
	transit = a;
	a = b;
	b = transit;
	printf("%i et %i \n", a, b);
}