#include <stdio.h>
int main(void)
{
	char c = 'A';
	char d = 65;

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);

	return 0;
}