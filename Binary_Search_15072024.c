#include <stdio.h>

int main() {
    int low = 0;
    int high, mid,tar;
     
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 89, 8};  //8 can't be found as array is not sorted. 
    int s = sizeof(arr) / sizeof(arr[0]);
    
    printf("Size of Array = %d\n", s);
    high = s - 1;
    printf("Low = %d \nHigh = %d\n", low, high);
    
    printf("Enter element you want to search : ");
    scanf("%d", &tar);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == tar) {
            printf("Element found at index: %d\n", mid);
            return 0;
        } 
        
        else if (arr[mid] < tar) {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
        
    }

    printf("Element not found in the array\n");
    return 0;
}
