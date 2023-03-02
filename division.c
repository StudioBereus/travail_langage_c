#include<math.h>
#include<stdio.h>

//Ecrire un algorithme de divion sans l'operateur /, affichant le quotient et le reste.

int main() {
	int a, b, min, max, quotient=0, reste,sum, it;

	printf("Veuillez entrer un chiffre\n"); 
	scanf_s("%i", &a);
	printf("Veuillez entrer un deuxieme chiffre\n");
	scanf_s("%i", &b);
	if (a > b) {
		max = a;
		min = b;
	}
	else if(b > a){
		max = b;
		min = a;

	}
	else { //Si a=b
		quotient = 1;
		reste = 0;
	}
	sum = min;
	while (min <= max) {
		min += sum;
		quotient++;
	}
	reste = max - (min * quotient);
	printf("Le quotient est de : %i \nLe reste est de : %i", quotient, reste);
}