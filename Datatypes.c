#include<stdio.h>
int main()
{
		int a = 5;
		float b = 6.3;
		char c = 'A';
		double d = 7.89;
		long e = 1234567890;
		short f = 12345;
		unsigned int g = 4294967295;
		signed int h = -1234567890;
		unsigned char i = 255;
		signed char j = -128;
		long long k = 1234567890123456789;
		unsigned long long l = 18446744073709551615U;
		printf("Integer: %d\n", a);
		printf("Float: %.2f\n", b);

		printf("Character: %c\n", c);
		printf("Double: %.2lf\n", d);
		printf("Long: %ld\n", e);
		printf("Short: %hd\n", f);	
		printf("Unsigned Integer: %u\n", g);
		printf("Signed Integer: %d\n", h);
		printf("Unsigned Char: %u\n", i);
		printf("Signed Char: %d\n", j);
		printf("Long Long: %lld\n", k);
		return 0;
}