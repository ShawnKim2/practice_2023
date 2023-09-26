#include <stdio.h>
int main(void)
{
	int seconds = 0, minutes = 0, hours = 0;

	while(seconds >= 0)
	{
		printf("Input seconds: ");
		scanf("%d", &seconds);

		minutes = seconds / 60;
		seconds = seconds % 60;

		hours = minutes / 60;
		minutes = minutes % 60;

		if(seconds >= 0)
		{
			printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
		}

	}

	printf("Good bye\n");
}