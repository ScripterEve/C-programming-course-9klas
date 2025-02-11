#include <stdio.h>

struct Student {
    char name[20];
    int numberInClass;
    float averageGrade;
};

int main() {
    struct Student student = {"Viktor", 9,3.33};
    printf("Student name:%s\n", student.name);
    printf("Student's number in class:%d\n", student.numberInClass);
    printf("Student's average grade:%.2f\n", student.averageGrade);
    return 0;
}