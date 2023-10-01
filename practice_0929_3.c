#include <stdio.h>
int main(void)
{
	int number;
	
	printf("Input number: ");
	scanf("%d", &number);
	
	if (number < 5)
		printf("less than 5");
	else if (number >= 5)
		if(number > 10)
			printf("bigger than 10");
		else
			printf("same or bigger than 5");
}
