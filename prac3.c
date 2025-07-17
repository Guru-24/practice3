#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int rollNo;
    char name[50];
    float marks;
};
int main() {
    struct Student students[MAX];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);
for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        getchar();  // Clear newline from buffer
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

