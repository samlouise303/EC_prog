#include <stdio.h>

int isPalindrome(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i])
            return 0;
    }
    return 1;
}

void printArray(int arr[], int size)
{
    printf("{");

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);

        if (i != size - 1)
            printf(", ");
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
    if (isPalindrome(arr1, 5))
        printf(" = PALINDROME\n");
    else
        printf(" = NOT PALINDROME\n");

    printArray(arr2, 4);
    if (isPalindrome(arr2, 4))
        printf(" = PALINDROME\n");
    else
        printf(" = NOT PALINDROME\n");

    printArray(arr3, 5);
    if (isPalindrome(arr3, 5))
        printf(" = PALINDROME\n");
    else
        printf(" = NOT PALINDROME\n");

    printArray(arr4, 1);
    if (isPalindrome(arr4, 1))
        printf(" = PALINDROME\n");
    else
        printf(" = NOT PALINDROME\n");

    return 0;
}
