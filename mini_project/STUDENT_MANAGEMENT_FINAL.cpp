// STUDENT MANAGEMENT

// Including necessary header files
#include <stdio.h> // Standard Input/Output
#include <string.h> // String handling functions

// Struct to represent a student
struct Student {
    int id; // Student ID
    char name[50]; // Student name
    int age; // Student age
    char gender[50]; // Student gender
    double gpa; // Student GPA
    char grade[40]; // Student grade
};
typedef struct Student str; // Alias for struct Student

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Function to remove newline character
void removeNewline(char x[]) {
    if (x[(strlen(x) - 1)] == '\n') {
        x[(strlen(x) - 1)] == '\0'; // Replacing newline character with null terminator
    }
}

// Function to input student information
void inputStudent(str &sv) {
    getchar(); // Clearing the input buffer
    printf("\nEnter student name: ");
    fgets(sv.name, sizeof(sv.name), stdin);
    removeNewline(sv.name); // Removing newline character

    printf("Enter student ID: ");
    scanf("%d", &sv.id);

    printf("Enter student age: ");
    scanf("%d", &sv.age);
    getchar(); // Clearing the input buffer

    printf("Enter student gender: ");
    fflush(stdin);
    fgets(sv.gender, sizeof(sv.gender), stdin);
    removeNewline(sv.gender); // Removing newline character

    printf("Enter student GPA: ");
    scanf("%lf", &sv.gpa);
}

// Function to calculate student's grade
void calculateGrade(str &sv) {
    if (sv.gpa >= 8.00) {
        strcpy(sv.grade, "Excellent");
    } else if (sv.gpa >= 6.50 || sv.gpa < 8.00) {
        strcpy(sv.grade, "Good");
    } else {
        strcpy(sv.grade, "Average");
    }
}

// Function to print student information
void printStudent(str sv) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", sv.name);
    printf("ID: %d\n", sv.id);
    printf("Age: %d\n", sv.age);
    printf("Gender: %s\n", sv.gender);
    printf("GPA: %.2lf\n", sv.gpa);
    calculateGrade(sv);
    printf("Grade: %s\n", sv.grade);
}

// Function to input a list of students
void inputStudentList(str ds[50], int &n) {
    printf("\nEnter the number of students to input: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nInput details for student %d: \n", i + 1);
        inputStudent(ds[i]);
    }
}

// Function to print a list of students
void printStudentList(str ds[50], int n) {
    printf("\nStudent List:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printStudent(ds[i]);
        printf("\n");
    }
}

// Function to find the student with the highest GPA
double findMaxGPA(str ds[50], int n) {
    double maxGPA = ds[0].gpa;
    for (int i = 0; i < n; i++) {
        if (maxGPA < ds[i].gpa) {
            maxGPA = ds[i].gpa;
        }
    }
    return maxGPA;
}

// Function to sort students by GPA in ascending order
void sortStudentsByGPA(str ds[50], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].gpa > ds[j].gpa) {
                str temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

// Function to sort students by name
void sortStudentsByName(str ds[50], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ds[i].name, ds[j].name) > 0) {
                str temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

// Main function for student management
int main() {
    printf("Welcome to Student Management System\n");
    int n;
    int choice;
    str studentList[50];

    do {
        printf("\nMenu:\n");
        printf("1. Input student details\n");
        printf("2. Print student details\n");
        printf("3. Sort students by name\n");
        printf("4. Sort students by GPA\n");
        printf("5. Find maximum GPA\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputStudentList(studentList, n);
                break;
            case 2:
                printStudentList(studentList, n);
                break;
            case 3:
                sortStudentsByName(studentList, n);
                printf("\nStudents sorted by name:\n");
                printStudentList(studentList, n);
                break;
            case 4:
                sortStudentsByGPA(studentList, n);
                printf("\nStudents sorted by GPA:\n");
                printStudentList(studentList, n);
                break;
            case 5:
                printf("\nMaximum GPA: %.2lf\n", findMaxGPA(studentList, n));
                break;
            case 6:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
