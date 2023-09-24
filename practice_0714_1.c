#include <stdio.h>
int main(void)
{
	int won = 0;
	float dollar = 0;

	printf("Input won: \n");
	scanf("%d", &won);

	dollar = 0.00089 * won;

	printf("your %dwon is changed to %fdollar.\n", won, dollar);

	return 0; 
}