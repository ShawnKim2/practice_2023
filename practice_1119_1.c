#include <stdio.h>
int main(void)
{
	typedef unsigned short int US;
	
	unsigned short int data = 5;
	US temp;
	
	temp = data;
	
	printf("%d\n", temp);
}
