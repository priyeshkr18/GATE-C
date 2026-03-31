#include <stdio.h>

int main()
{
	float amount, discount = 0, final_amount;
	char code;

	// Input
	printf("Enter amount: ");
	scanf("%f", &amount);

	printf("Enter product code (A/B/C/D/E): ");
	scanf(" %c", &code); // space before %c avoids input issue

	// Switch case for GST relief
	switch (code)
	{
	case 'A':
	case 'a':
		discount = 0;
		break;

	case 'B':
	case 'b':
		discount = amount * 0.02;
		break;

	case 'C':
	case 'c':
		discount = amount * 0.05;
		break;

	case 'D':
	case 'd':
		discount = amount * 0.12;
		break;

	case 'E':
	case 'e':
		discount = amount * 0.18;
		break;

	default:
		printf("Invalid product code\n");
		return 1;
	}

	// Final calculation
	final_amount = amount - discount;

	// Output
	printf("\nOriginal Amount: %.2f", amount);
	printf("\nDiscount: %.2f", discount);
	printf("\nFinal Amount to Pay: %.2f\n", final_amount);

	return 0;
}