#include<math.h>
#include<stdio.h>

int main() {
	float nb1, nb2, res;
	char op;

	printf("Veuillez indiquer l'operation que vous souhaitez faire\n");
	scanf_s("%f %c %f", &nb1, &op, 1, &nb2);
	switch (op) {
	case '+':
		res = nb1 + nb2;
		break;
	case '-':
		res = nb1 - nb2;
		break;
	case'/':
		res = nb1 / nb2;
		break;
	case '*':
		res = nb1 * nb2;
		break;
	}
	printf("%f", res);
}