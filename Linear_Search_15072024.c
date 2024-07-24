#include <stdio.h>

int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8,9};
    int tar=7;
    int s=sizeof(arr)/sizeof(arr[0]);
    printf("Size of Array : %d\n", s);
    
    for(int i=0;i<s;i++)
    {
        if(arr[i]==tar)
        {
            printf("Element found at index %d", i); 
            return 0;
        }
    }
    
    
    
    

    printf("Element not found in the array\n");
    return 0;
}
