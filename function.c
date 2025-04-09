#include<stdio.h>
void sum(int x, int y)
{
	int z = x + y;
	printf("Sum: %d\n", z);
}
int main()
{
	//function call
	sum(5, 10);
	sum(20, 30);
	sum(100, 200);
	return 0;
}