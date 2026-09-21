#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float score;
} Student;

void printStudent(Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Score: %.2f\n", student.score);
}

int main() {
    Student students[] = {
        {"Alice", 20, 91.5},
        {"Brian", 22, 87.0},
        {"Clara", 19, 95.5},
        {"David", 21, 82.5}
    };

    int count = sizeof(students) / sizeof(students[0]);
    float total = 0.0f;

    printf("Student Report\n");
    printf("==============\n");

    for (int i = 0; i < count; i++) {
        printStudent(students[i]);
        printf("--------------\n");
        total += students[i].score;
    }

    printf("Average Score: %.2f\n", total / count);

    return 0;
}