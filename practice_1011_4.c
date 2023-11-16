#include <stdio.h>
int main(void)
{
	unsigned int a = 10, *p;
	p = &a;
	
	printf("%d\n", &a);
	
	return 0;
}

