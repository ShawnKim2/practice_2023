#include <stdio.h>

long recursive_factorial(int n);

long recursive_factorial(int n)
{
	if (n > 0)
	{
		return n * recursive_factorial(n - 1);
	}
	else
		return 1;
}

int main(void)
{
	int num;
	
	printf("Input number: ");
	scanf("%d", &num);
	
	printf("%d\n", recursive_factorial(num));
	
	return 0;
}

