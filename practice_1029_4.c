#include <stdio.h>
int main(void)
{
	int age;
	printf("Input age: ");
	scanf("%d", &age);
	
	if(age < 18)
		printf("Adults only!");
}

