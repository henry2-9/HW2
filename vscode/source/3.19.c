#include <stdio.h>
#include <stdbool.h>

int main() {
	int principal, days;
	float rate, interest;

	while (true) {
		printf("Enter loan principal (-1 to end):");
		scanf_s("%d", &principal);
		if (principal == -1) {
			return 0;
		}
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter terms of the loan in days:");
		scanf_s("%d", &days);

		interest = principal * rate * days / 365;

		printf("The interest charge is %.2f\n", interest);
	}
	return 0;
}