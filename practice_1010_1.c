#include <stdio.h>
#define MONTHS 12


int main(void)
{
	int high[MONTHS] = {2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4};
	
	for (int i = 0; i < MONTHS; i += 1)
		printf("%d ",high[i]);
	printf("\n");
}

