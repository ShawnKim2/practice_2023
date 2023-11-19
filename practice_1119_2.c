#include <stdio.h>

struct people
{
	char name[20];
	int age;
	float height;
	float weight;
};

typedef struct people person;

int main(void)
{
	person data;
	
	printf("Please input your information\n");
	printf("name: ");
	scanf("%s", &data.name);
	printf("age: ");
	scanf("%d", &data.age);
	printf("height: ");
	scanf("%f", &data.height);
	printf("weight: ");
	scanf("%f", &data.weight);
	
	printf("This is your information.\n");
	printf("%s : %d years old, %.1fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);
	
}
