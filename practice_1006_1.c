#include <stdio.h>

int fibonacci(int number);

int fibonacci(int number)
{
	if (number > 2)
		return fibonacci(number - 2) + fibonacci(number - 1);
	else
		return 1;
}

int main(void)
{
	for(int count = 1; count < 13; count += 1)
		printf("%d ", fibonacci(count));
}

