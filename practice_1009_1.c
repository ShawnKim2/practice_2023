#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
	int a, b;
	
	a = 123;
	b = 456;
	
	swap(&a, &b);
	printf("%d %d\n", a, b);
	
	return 0;
}


void swap(int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}
