#include <stdio.h>
int main (void)
{
	int *ptr = 0;
	
	printf("%p %lld\n", ptr, (long long)ptr);
	
	ptr ++;
	
	printf("%p %lld\n", ptr, (long long)ptr);
}
