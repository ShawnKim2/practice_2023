#include <stdio.h>
int main (void)
{
	unsigned int a = 10, *p, **pp;
	p = &a;
	pp = &p;
	
	printf("%d\n", **pp);
}
