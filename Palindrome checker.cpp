#include <stdio.h>

int isPalindrome(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

void printArray(int arr[], int size)
{
    int i;

    printf("{");
    for(i = 0; i < size; i++)
    {
        printf("%d", arr[i]);

        if(i < size - 1)
        {
            printf(", ");
        }
    }
    printf("}");
}

int main()
{
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {5, 4, 4, 5};
    int arr3[] = {1, 2, 3, 4, 5};
    int arr4[] = {7};

    printArray(arr1, 5);
    printf(" = %s\n", isPalindrome(arr1, 5) ? "PALINDROME" : "NOT PALINDROME");

    printArray(arr2, 4);
    printf(" = %s\n", isPalindrome(arr2, 4) ? "PALINDROME" : "NOT PALINDROME");

    printArray(arr3, 5);
    printf(" = %s\n", isPalindrome(arr3, 5) ? "PALINDROME" : "NOT PALINDROME");

    printArray(arr4, 1);
    printf(" = %s\n", isPalindrome(arr4, 1) ? "PALINDROME" : "NOT PALINDROME");

    return 0;
}
