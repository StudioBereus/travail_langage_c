#include<math.h>
#include<stdio.h>

int main() {
	char op; 
	float nb1, nb2, res, r;
	printf("Veuillez entrer une operation, en commençant par les deux nombres et finissant par l'operation souhaitee (+ , _ , * , / , p , q\n");
	scanf_s("%f %f %c", &nb1, &nb2, &op, 1);
	switch (op) {
	case '+':
		res = nb1 + nb2;
		break;
	case '-':
		res = nb1 - nb2;
		break;
	case '*':
		res = nb1 * nb2;
	case '/':
		if (nb2 != 0) {
			res = nb1 / nb2;
		}
		else {
			printf("Division par 0 impossible");
			res = 0;
		}
		break;
	case 'p':
		for (int i = 1; i <= nb1 && i <= nb2; i++) {
			if ((int)nb1 % i == 0 && (int)nb2 % i == 0) {
				res = i;
			}
		}
	case'q':
		res = (nb1 > nb2) ? nb1 : nb2;
		while (1) {
			if ((int)res % (int)nb1 == 0 && (int)res % (int)nb2 == 0) {
				printf("%i", res);
				break;
			}
			++res;
		}
		break;
	}
	
	
	printf("%f", res);

}