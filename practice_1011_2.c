#include <stdio.h>
int main(void)
{
	int i, j;
	i = 10;
	j = 20;
	
	int *p;
	p = &i;
	
	*p = 40;
	
	p = &j;
	
	*p = 60;
	
	printf("value of i = %d\n", i);
	printf("value of j = %d\n", j);
}

