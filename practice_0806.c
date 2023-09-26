#include <stdio.h>
#define PI 3.141592f
int main(void)
{
	float radius, area;

	printf("Input radius\n");
	scanf("%f", &radius);

	area = PI * radius * radius;

	
	printf("Area of circle is %f\n", area);
}