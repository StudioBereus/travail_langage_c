#include <math.h>
#include <stdio.h>

int main() {
	float a, b, moyenne;

	printf("Veuillez entrer un nombre");
	scanf_s("%f", &a);
	printf("Veuillez donner un deuxieme nombre");
	scanf_s("%f", &b);
	moyenne = (a + b) / 2;
	printf("%f", moyenne);
}