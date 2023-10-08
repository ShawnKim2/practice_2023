#include <stdio.h>
int main(void)
{
	int a, b;
	
	a = 123;
	
	int *a_ptr;
	
	a_ptr = &a;
	
	printf("%d %d %p\n", a, *a_ptr, a_ptr);
	
	*a_ptr = 456;
	
	printf("%d %d %p\n", a, *a_ptr, a_ptr);
	
	b = *a_ptr;
	
	printf("%d\n", b);
	printf("%d %d %p\n", a, *a_ptr, a_ptr);
	
	*a_ptr = 789;
	printf("%d\n", b);    // why printing 456? not 789?? 
	printf("%d %d %p\n", a, *a_ptr, a_ptr);
}

