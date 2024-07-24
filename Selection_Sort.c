#include <stdio.h>

int main()
{

    int temp, min;
    int arr[] = {17, 85, 26, 45, 89, 36, 24, 15, 1, 2, 5, 3, 8, 9, 6};
    int s = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < s; i++)
    {
        min = i;
        for (int j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted Array : ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}