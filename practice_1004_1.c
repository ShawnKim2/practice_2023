#include <stdio.h>

long loop_factorial(int n);

long loop_factorial(int n)
{
	long ans;
	
	for (ans=1; n > 1; n-=1)
		ans *= n;
		
	return ans;
}

int main(void)
{
	int num;
	
	printf("Input number: ");
	scanf("%d", &num);
	
	printf("%d\n", loop_factorial(num));
	
	return 0;
}

