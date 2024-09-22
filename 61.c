#include <stdio.h>
#include <string.h> // Needed for strcpy

struct student { // Structure declaration
    int roll_no;
    char name[50];
    float marks;
    char grade;
};

int main() {
    struct student s;

    s.roll_no = 22; 
    strcpy(s.name, "Muizza"); // Assign name using strcpy
    s.marks = 30.0; 
    s.grade = 'A'; 

    // Print the student details
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);

    return 0;
}
