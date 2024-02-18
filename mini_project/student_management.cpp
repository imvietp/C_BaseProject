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
    char grade[40];
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
    getchar();     //clearInputBuffer(); // Clearing the input buffer
    printf("\nNhập tên sinh viên: ");
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

// Tính học lực của sinh viên
void hocluc(str &sv)
{
    if(sv.gpa >= 8.00)
    {
        strcpy(sv.grade, "Giỏi");
    }
    else if (sv.gpa >= 6.50 || sv.gpa < 8.00)
    {
        strcpy(sv.grade, "Khá");
    }
    else
        strcpy(sv.grade, "Trung Bình");
}

// In thông tin học sinh
void printStudent(str sv)
{
    printf("\nThông tin sinh viên:\n");
    printf("Tên: %s", sv.name);
    printf("MSSV: %d\n", sv.id);
    printf("Tuổi: %d\n", sv.age);
    printf("Giới tính: %s", sv.gender); 
    printf("GPA: %.2lf\n", sv.gpa);
    hocluc(sv);
    printf("Xếp loại: %s", sv.grade);
}


// Nhập danh sách sinh viên
void nhapdanhsachsinhvien(str ds[50], int &n)
{
    printf("Nhập số lượng sinh viên cần nhập: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("- Nhập sinh viên thứ %d: ", i);
        inputStudent(ds[i]);
    }
    
}

// Xuất danh sách sinh viên
void xuatdanhsachsinhvien(str ds[50], int n)
{
    printf("Danh sách các sinh viên: \n");
    for (int i = 0; i < n; i++)
    {
        printf("- Sinh viên %d", i);
        printStudent(ds[i]);
        printf("\n");
        printf("\n");
    }

}

// Sinh viên có điểm cao nhất
int diemcaonhatsinhvien(str ds[50], int n)
{
    int maxdiem = ds[0].gpa;
    for (int i = 0; i < n; i++)
    {
        if (maxdiem < ds[i].gpa)
        {
            maxdiem = ds[i].gpa;
        }
    }
    return maxdiem ;
}

// Sắp xếp sinh viên có gpa từ thấp tới cao
void sapxepsinhvien_gpa_thaptoicao(str ds[50], int n)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].gpa > ds[j].gpa)
            {
                str temp;                       
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp; 
            }
        }  
    }
}

// Sắp xếp sinh viên theo tên
void sapxepsinhvientheoten(str ds[50], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(strcmp(ds[i].name, ds[j].name) > 0)
            {
                str temp;                       
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp; 
            }
        }
        
    }
    
}


// Device control
int main()
{
    printf("Chọn những lựa chọn sau: \n");
    printf("1. Nhập tên sinh viên: \n");
    str sv1;
    int n;
    int chon;

    str ds[50];
    do
    {
        printf("Chọn những lựa chọn sau: \n");
        printf("1. Nhập danh sach sinh viên: \n");
        printf("2. Xuất danh sach sinh viên: \n");
        printf("3. Sap xep theo ten sinh viên: \n");
        printf("4. Sap xep theo GPA sinh viên: \n");
        printf("5: Tìm điểm cao nhất của sinh viên\n");

        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            nhapdanhsachsinhvien(ds, n);
            break;
            
        case 2:
            xuatdanhsachsinhvien(ds, n);
            break;        

        case 3:
            sapxepsinhvientheoten(ds, n);
            printf("Sau khi sắp xếp theo ten: ");
            xuatdanhsachsinhvien(ds,n);
            break;

        case 4:
            sapxepsinhvien_gpa_thaptoicao(ds, n);
            printf("Sau khi sắp xếp theo gpa: ");
            xuatdanhsachsinhvien(ds,n);
            break;        
        case 5:
            int max_diem = diemcaonhatsinhvien(ds, n);
            printf("Điểm cao nhất của sinh viên là: %d điểm\n", max_diem);
            break;
        }    


    } while (n != 0 );
    

    
    







    //inputStudent(sv1);
    //printStudent(sv1);
    
}

