#include <stdio.h>
int main(void)
{
	int i = 100, j = 200, *p = &i, **q = &p;
	
	printf("%d, %d, %u, %u, %u, %u, %u, %u, %d, %d \n", i, j, p, q, &i, &j, &p, &q, *p, **q);
	
}
