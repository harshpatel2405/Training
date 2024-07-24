// Online C compiler to run C program online
#include <stdio.h>

void merge(int arr[], int low, int mid, int high); // merge function
void mergesort(int arr[], int low, int high);      // mergesort function

int main()
{
    int arr[] = {2, 8, 9, 5, 3};
    int s = sizeof(arr) / sizeof(arr[0]);

    printf("UnSorted Array : ");
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    mergesort(arr, 0, s - 1);

    printf("Sorted Array : ");
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}

void mergesort(int arr[], int low, int high)
{
    int mid = (low + high) / 2;
    if (low < high)
    {
        mergesort(arr, low, mid);      // sorting first half of array
        mergesort(arr, mid + 1, high); // sorting second half of array

        merge(arr, low, mid, high); // merging two subarrays
    }
}

void merge(int arr[], int low, int mid, int high)
{

    int a1 = mid - low + 1; // 2,5,9,8,4,1
    int a2 = high - mid;    // low=0
                            // mid=2 arr[3]
                            // high=5
    int l[a1], m[a2];

    for (int i = 0; i < a1; i++)
    {
        l[i] = arr[low + i];
    }

    for (int j = 0; j < a2; j++)
    {
        m[j] = arr[mid + 1 + j];
    }

    int i, j, k;
    i = 0;
    j = 0;
    k = low; 

    while (i < a1 && j < a2)
    {
        if (l[i] <= m[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = m[j];
            j++;
        }
        k++;
    }

    while (i < a1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < a2)
    {
        arr[k] = m[j];
        prinf("%d", arr[k]);
        j++;
        k++;
    }
}