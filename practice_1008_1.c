#include <stdio.h>
int main(void)
{
	int i = 100;
	int *p;
	p = &i;
	
	printf("%d\n", i);
	printf("%p\n", &i);
	printf("%d\n", *p);
	printf("%p\n", p);
}

