#include <stdio.h>
int main() {
	char op;
	int n1, n2;

	printf("Operation souhaitee (+ ou *) ?");
	scanf_s("%c", &op);
	printf("Donnez deux nombres entiers");
	scanf_s("%d %d", &n1, &n2);
	if (op == '+') {
		printf_s("Leur somme est : %d", n1 + n2);
	}
	else {
		printf_s("Leur produit est %d : ", n1 * n2);
	}
}