#include<stdio.h>
int main(){
	int a;
	int b;
	int operator;
	int result;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter operator (1 for +, 2 for -, 3 for *, 4 for /): ");
	scanf("%d", &operator);
	switch(operator){
		case 1:
			result = a + b;
			printf("Result: %d\n", result);
			break;
		case 2:
			result = a - b;
			printf("Result: %d\n", result);
			break;
		case 3:
			result = a * b;
			printf("Result: %d\n", result);
			break;
		case 4:
			if(b != 0){
				result = a / b;
				printf("Result: %d\n", result);
			}else{
				printf("Error: Division by zero\n");
			}
			break;
		default:
			printf("Invalid operator\n");
	}
}