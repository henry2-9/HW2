#include <stdio.h>
#include <stdbool.h>

int main() {
	float sales, commission, salary ;

	while (true) {
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sales);

		if (sales == -1) {
			return 0;
		}

		commission = sales / 100 * 9;
		salary = commission + 200;

		printf("Salary is %.2f\n", salary);
	}
	return 0;
}