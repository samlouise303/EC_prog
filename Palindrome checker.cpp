#include <stdio.h>

int isPalindrome(int arr[], int size)
{
    int i;

    for (i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
            return 0;
    }

    return 1;
}

void printArray(int arr[], int size)
{
    int i;

    printf("{");

    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);

        if (i < size - 1)
            printf(", ");
    }

    printf("}");
}

int main()
{
    int arr1[] = {1, 2, 3, 2, 1};

    printArray(arr1, 5);

    if (isPalindrome(arr1, 5))
        printf(" = PALINDROME\n");
    else
        printf(" = NOT PALINDROME\n");

    return 0;
}
