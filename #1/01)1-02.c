#include <stdio.h>

int main()
{
	printf("(1) %d x %03d = %5d[end]\n", 3, 24, 3 * 24);
	printf("(2) %f, %.10f[end]\n", 0.123456789, 0.123456789);
	printf("(3) %c, %3c[end]\n", 97, 65);
	printf("(4) %s, %10s, %-10s[end]\n", "string", "right", "left");
	printf("(5) %d x %d + %d = %d[end]\n", 10, 0b1010, 012, 0x6e);
	

	// Literal Test
	int a = 0b1010;
	printf("%d\n", ++a);

	// format test
	printf("%d %lld\n", -1, -1);
	printf("%d %lld\n", -1, -1LL);
}