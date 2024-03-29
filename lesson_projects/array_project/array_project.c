#include <stdio.h>

// Print all elements in array
int print_element(int n, int arr[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Find the largest element in array
int largest_element(int n, int arr[])
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}

// Calculate the average of the array
int average(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return (double) sum/n; 
}

// Sort all element from min to max
int sort_traditional_lowtohigh(int n, int arr[])
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }  
    printf("After sort low to high is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Sort all element from max to min
int sort_traditional_hightolow(int n, int arr[])
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }  
    printf("After sort high to low is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Sort all element from min to max by using insertion sort
int insertion_sort(int n, int arr[])
{
    int i, j, key;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j  - 1;
        }
        arr[j + 1] = key;
    }

    printf("After insertion sort is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}

// Remove the occurence of element in array
int remove_occur(int n, int arr[], int val)
{
    printf("The newest array is: ");
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == val){
            continue;
        }
        else{
            printf("%d ", arr[i]);
        }
    }
   
}

// C Program To Merge Two Arrays
void merge_2_array(int arr[], int arr1[], int n, int arr1_size)
{
    int arr_total[100];
    int size_result = n + arr1_size;
    for (int i = 0; i < n; i++)
    {
        arr_total[i] = arr[i] ;
    }

    for (int i = n, j = 0; i < size_result, j < arr1_size; i++, j++)
    {
            arr_total[i] = arr1[j];   
    }
    
    printf("Mảng mới arr total là: ");
    for (int i = 0; i < size_result; i++)
    {
        printf("%d ", arr_total[i]);
    }
}



int main()
{
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    int arr[100];
    printf("Nhap n chu so: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_element(n, arr);  printf("\n");
    printf("The largest element is: %d", largest_element(n, arr));   printf("\n");
    printf("The average is: %d", average(n, arr));   printf("\n");
    sort_traditional_lowtohigh(n, arr);   printf("\n");
    sort_traditional_hightolow(n, arr);   printf("\n");
    insertion_sort(n, arr);   printf("\n");

    int val;
    printf("Nhap chu so muon xoa: ");  
    scanf("%d", &val);
    remove_occur(n, arr, val);   printf("\n");

    int arr1_size;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &arr1_size); 
    int arr1[100];
    printf("Nhap n chu so mang arr1: ");
    for (int i = 0; i < arr1_size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    merge_2_array(arr, arr1, n, arr1_size);

}

