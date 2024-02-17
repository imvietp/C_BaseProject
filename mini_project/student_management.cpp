// STUDENT MANAGEMENT

// Comment: Including necessary header files
#include <stdio.h>
#include <string.h>
//#include <conio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char gender[50];
    double gpa;
} ;
typedef struct Student str;

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Xóa xuồng dòng
void xoaXuongDong(char x[])
{
    if(x[(strlen(x)-1)] == '\n')
    {
        x[(strlen(x)-1)] == '\0';
    }
}

// Nhập thông tin học sinh
void inputStudent(str &sv)
{      
    
    printf("Nhập tên sinh viên: ");
    fgets(sv.name, sizeof(sv.name), stdin); xoaXuongDong(sv.name);

    printf("\nMssv: ");
    scanf("%d", &sv.id);

    printf("\nTuổi: ");
    scanf("%d", &sv.age); 
    getchar();     //clearInputBuffer(); // Clearing the input buffer

    printf("\nGiới tính: "); 
    fflush(stdin); 
    fgets(sv.gender, sizeof(sv.gender), stdin); xoaXuongDong(sv.gender);

    printf("\nGPA: ");
    scanf("%lf", &sv.gpa);
}

// In thông tin học sinh
void printStudent(str sv)
{
    printf("\nThông tin sinh viên:\n");
    printf("Tên: %s", sv.name);
    printf("MSSV: %d\n", sv.id);
    printf("Tuổi: %d\n", sv.age);
    printf("Giới tính: %s\n", sv.gender);
    printf("GPA: %.2lf\n", sv.gpa);
}


// Device control
int main()
{
    printf("Chọn những lựa chọn sau: \n");
    printf("1. Nhập tên sinh viên: \n");
    str sv1;
    inputStudent(sv1);
    printStudent(sv1);
    
}

