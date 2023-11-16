#include <stdio.h>
int main (void)
{
	int point[] = {3, 4, 7, 9, 10};
	int *ptr;
	int sum, aryLength;
	aryLength = sizeof(point) / sizeof(int);
	ptr = point;
	for (int i = 0; i < aryLength; i++)
		sum += *(ptr + i);
	printf("%d\n", sum);
	return 0;
}
