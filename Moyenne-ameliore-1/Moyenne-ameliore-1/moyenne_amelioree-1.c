#include <math.h>
#include <stdio.h>

int main() {
	int nb_base, nb;
	float somme = 0, moyenne, chf;
	printf("Veuillez indiquer combien de nombres vous souhaitez en faire la moyenne \n");
	scanf_s("%i", &nb_base);
	nb = nb_base;
	while (nb != 0) {
		printf("Veuillez indiquer un nombre \n");
		scanf_s("%f", &chf);
		somme += chf;
		nb--;
	}
	moyenne = somme / nb_base;
	printf("%f", moyenne);
}

