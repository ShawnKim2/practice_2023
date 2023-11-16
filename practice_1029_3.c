#include <stdio.h>

double average(double *arr, int n);

double average(double *arr, int n)
{
	double avg = 0.0;
	for(int i = 0; i < n; ++i)
	{
		avg += arr[i];
	}
	avg /= (double)n;
	
	return avg;
}

int main(void)
{
	double arr1[5] = {10, 13, 12, 7, 8};
	double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};
	
	printf("%f\n", average(arr1, 5));
	printf("%f\n", average(arr2, 5));
}

