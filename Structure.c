#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int roll_no;
    float marks;
};

int main{
    struct student s1;
    s1.roll_no = 101;
    strcpy(s1.name, "John Doe");
    s1.marks = 85.5;

    printf("Student Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);
    return 0;

}