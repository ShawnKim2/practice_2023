#include <stdio.h>

int put(int);

int put(int number)
{
    return number;
}

void my_func(int, int);

void my_func(int n, int number)
{
    printf("Level %d, address of variable n = %p\n", n, &n);
    if (n < number)
        my_func(n + 1, number);
}

int main(void)
{
    int number;
    printf("input number: \n");
    scanf("%d", &number);         //I fixed this part
    my_func(1, number);
    
    return 0;
}

