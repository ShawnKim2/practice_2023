#include <stdio.h>
#include <string.h>
int main(void)
{
	struct name_grade{
		char name[10];
		int grade;
	};
	struct name_grade st_g1, st_g2;
	
	strcpy(st_g1.name, "SH");
	st_g1.grade = 50;
	strcpy(st_g2.name, st_g1.name);
	st_g2.grade = st_g1.grade;
	printf("%s\'s grade is %d.\n", st_g2.name, st_g2.grade);
	return 0;
}

