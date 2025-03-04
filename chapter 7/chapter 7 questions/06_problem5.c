#include <stdio.h>

int count(int[], int);

int count(int arrPassed[], int lengthPassed)
{
    int positiveNumber = 0;
    for (int i = 0; i < lengthPassed; i++)
    {
        if (arrPassed[i] > 0)
        {
            // positiveNumber + 1;    // not modify the variable hence return initial vlaue which is 0
            positiveNumber++;
        }
    }
    return positiveNumber;
}

int main()
{
    int arr[] = {1, -2, 3, -4, 5, -6, 7};

    int totalBytes = sizeof(arr);
    int elementSize = sizeof(arr[0]);
    int length = totalBytes / elementSize;

    printf("Number of +ve elements are %d", count(arr, length));

    return 0;
}

// // Calculate total size of array in bytes
// int totalBytes = sizeof(arr);

// // Size of one element in bytes
// int elementSize = sizeof(arr[0]);

// // Number of elements
// int length = totalBytes / elementSize;