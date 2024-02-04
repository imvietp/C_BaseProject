#include <stdio.h>
#include <string.h>
// Print the input string
void print_string(char* name, char* home)
{
    printf("Name: %s\n", name);
    printf("Hometown: %s\n", home);
}

// Print the alphabet
void alphabet_upper()
{
    printf("Bang chu cai: ");
    char c;
    for(c = 'A'; c <= 'Z'; c++){
        printf("%c ", c);
    }
}

void alphabet_lower()
{
    printf("Bang chu cai: ");
    char c;
    for(c = 'a'; c <= 'z'; c++){
        printf("%c ", c);
    }
}

// Print the first letter of each word
void first_letter(char* str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if(i == 0 && str[i] != ' '){
            printf("%c ",str[i]);
        }

        else if (str[i - 1] == ' ' && str[i] != ' ')
        {
            printf("%c ",str[i]);
        }
        
    }
    
}

// Change from Upper to Lower
void upper_to_lower(char* str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] != ' ')
        {
            str[i] += 32;
        }
    }
    printf("%s ", str);
}

// Add two strings  - My method
void add_two_string(char* str1, char* str2)
{
    int size1 = strlen(str1) , size2 = strlen(str2);
    int size_total = size1 + size2;
    int str3[100];
    for(int i = 0; i < size1; i++)
    {
        str3[i] = str1[i] ;
    }

    for(int i = size1, j = 0; i < size_total && j < size2; i++, j++)
    {
        str3[i] = str2[j] ;
    }


    for(int i = 0; i < size_total; i++)
    {
        printf("%c", str3[i]);
    }
}

// Combine two strings
void combine_two_strings(char* str1, char* str2)
{
    char str3[100];
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
    }
     
   
    while(str2[j] != '\0')
    {
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0';
    printf("%s", str3);
}



int main ()
{
    char name[100];
    char home[100];
    printf("Nhap ten: ");
    scanf("%s", name);
    printf("Nhap que quan: ");
    scanf("%s", home);
    print_string(name, home); printf("\n");


    alphabet_upper(); printf("\n");
    alphabet_lower(); printf("\n");

    char str[100] = "HELLO WORLD MY NAME IS JOHN";
    first_letter(str); printf("\n");
    upper_to_lower(str); printf("\n");
    
    char str1[100] = "HELLO";
    char str2[100] = "John";
    //add_two_string(str1, str2);
    combine_two_strings(str1, str2);

}