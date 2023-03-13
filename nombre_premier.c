#include<math.h>
#include<stdio.h>

int main() {
	int nb, i = 2;

	printf("Veuillez entrer un nombre \n");
	scanf_s("%i", &nb);
	while (i < nb && nb % i != 0){
		++i;
	}
	if (i == nb) {
		printf("Ce nombre est premier");
	}
	else {
		printf("Ce nombre n'est pas premier");
	}


}