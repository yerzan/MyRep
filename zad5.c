#include <stdint.h>
#include <stdio.h>

int main() {
	float num1, num2;
	char operator;

	printf("Enter a first number: ");
	scanf_s("%f", &num1);

	printf("Enter a operator (+, -, *, /): ");
	scanf_s(" %c", &operator);

	printf("Enter a second number: ");
	scanf_s("%f", &num2);

	switch (operator) {
		case '+':
			printf("Result: %.2f\n", num1 + num2);
			break;
		case '-':
			printf("Result: %.2f\n", num1 - num2);
			break;
		case '*':
			printf("Result: %.2f\n", num1 * num2);
			break;
		case '/':
			if (num2 != 0) {
				printf("Result: %.2f\n", num1 / num2);
			}
			else {
				printf("Cannot be divided by zero");
			}

	}

	return 0;
}