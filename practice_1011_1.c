#include <stdio.h>

int main(void)
{
	char a, b, *p, *q;
	a = 'x';
	b = 'y';
	p = &a;
	q = &b;
	
	printf("%c %c %p %p\n", a, b, &a, &b);
	pritnf("%p %p %p %p\n", p, q, &p, &q);
	
	return 0;
}

