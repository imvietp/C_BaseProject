#include <stdio.h>

// Print value and address
int value_and_address()
{
    int n = 10;
    int *p;
    p = &n;
    printf("Value: %d\n", *p);
    printf("Address: %p\n", p);
}

// The operator of pointer
int operator_of_pointer(int* a, int* b, int* sum, int* sub, int* mul, int* div)
{
    *sum = *a + *b;
    *sub = *a - *b;
    *mul = *a * *b;
    *div = *a / *b;
}

// Input 
void input_operator_of_pointer()
{
    int a, b;
    printf("Nhập a và b lần lượt là: ");
    scanf("%d%d", &a, &b);
    int sum, sub, mul, div;
    operator_of_pointer(&a, &b, &sum, &sub, &mul, &div);
    printf("Tong = %d", sum); printf("\n");
    printf("Hieu = %d", sub); printf("\n");
    printf("Tích = %d", mul); printf("\n");
    printf("Thuong = %f", (double) div); printf("\n");
}

// *function
int *function()
{
    static int A;
    A = 1;
    return (&A);
}

// Input
void input_function()
{
    int *p;
    p = function();
    printf("A = %d", *p);    
}

// Calculate the size of the pointer
void size_of()
{
    int a = 10;
    double b = 10;
    char c = 'A' ;
    int *p;
    double *q;
    char *r;
    p = &a;
    q = &b;
    r = &c;
    printf("The size of p int is %d bytes", sizeof(p)); printf("\n");
    printf("The size of q double is %d bytes", sizeof(q)); printf("\n");
    printf("The size of r char is %d bytes", sizeof(r)); printf("\n");
}

int main()
{
    //value_and_address();
    //input_operator_of_pointer();
    //input_function();
    size_of();
}