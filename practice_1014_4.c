#include <stdio.h>
int main (void)
{
	int x = 6;
	int *p = &x;
	printf("%d\n", x);
	printf("%u\n", &x);
	printf("%d\n", ++(*p));
	x = 6;
	printf("%d\n", ++*p);
	x = 6;
	printf("%d\n",(*p)++);
	x = 6;
	printf("%d\n",*p++);
}
