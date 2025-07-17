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

