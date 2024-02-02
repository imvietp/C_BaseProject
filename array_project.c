#include <stdio.h>

int print_element(int n, int arr[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

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

int average(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return (double) sum/n; 
}

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

}