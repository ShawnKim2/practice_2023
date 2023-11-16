#include <stdio.h>

// 학생 구조체 정의
struct student {
    int ID;
    char name[20];
    int kor;
    int eng;
    int math;
};

int main() {
    
    struct student students[5] = {
        {11111, "One", 90, 95, 85},
        {22222, "Two", 85, 90, 80},
        {33333, "Three", 95, 90, 85},
        {44444, "Four", 70, 85, 95},
        {55555, "Five", 80, 75, 80},
    
    };

   
    printf("ID\tname\t\tkor\teng\tmath\ttotal\taverage\n");

    
    for (int i = 0; i < 5; i++) {
        int total = students[i].kor + students[i].eng + students[i].math;
        float average = (float)total / 3.0;
        printf("%d\t%s\t\t%d\t%d\t%d\t%d\t%.2f\n",
               students[i].ID, students[i].name,
               students[i].kor, students[i].eng, students[i].math,
               total, average);
    }

    return 0;
}

