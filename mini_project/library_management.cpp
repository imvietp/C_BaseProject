// LIBRARY MANAGEMENT

// Including necessary header files
#include <stdio.h> // Standard Input/Output
#include <string.h> // String handling functions

struct library
{
    char book_name[50];
    char book_id[50];
    char book_authorName[50];
    int year;
};

typedef struct library lib;

void add_book(lib &tv)
{
    printf("Nhập tên sách: ");
    fgets(tv.book_name, sizeof(tv.book_name), stdin);

    printf("Nhập mã sách: ");
    fgets(tv.book_id, sizeof(tv.book_id), stdin);

    printf("Nhập tên tác giả cuốn sách: ");
    fgets(tv.book_authorName, sizeof(tv.book_authorName), stdin);
}

void show_book(lib tv)
{
    printf("Tên sách là: %s\n", tv.book_name);
    printf("Mã sách là: %s\n", tv.book_id);
    printf("Tác giả cuốn sách là: %s\n", tv.book_authorName);

}

int main()
{
    lib tv;

    add_book(tv);
    show_book(tv);
}