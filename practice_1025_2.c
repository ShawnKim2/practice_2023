#include <stdio.h>
#define SIZE 10
int main(void)
{
    int key, i;
    int list[SIZE] = {5, 3, 6, 7, 8, 1, 9, 4, 2, 10};
    int found = 0;

    printf("Input a key value: ");
    scanf("%d", &key);

    for (i = 0; i < SIZE; i++)
    {
        if (list[i] == key)
        {
            printf("Find the key at %d of array\n", i + 1);
            found = 1;
        }
    }

    if (!found)
    {
        printf("There is no corresponding value in this array.\n");
    }

    printf("End\n");
    return 0;
}

