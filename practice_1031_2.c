#include <stdio.h>
int main(void)
{
	int *ptr = 0;
	
	ptr = ptr + 1;
	
	printf("%p %lld", ptr, (long long)ptr);
}

