#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int rollNo;
};

int main() {
    struct Student student1;

    printf("Enter student name: ");
    scanf("%s", student1.name);

    printf("Enter student age: ");
    scanf("%d", &student1.age);

    printf("Enter student roll number: ");
    scanf("%d", &student1.rollNo);

    // Print the collected details
    printf("\nStudent Details\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Roll Number: %d\n", student1.rollNo);

    return 0;
}
