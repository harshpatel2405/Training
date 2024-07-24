#include <stdio.h>
#include<>


int partition(int arr[], int start, int end){
    int i= start-1;
    int pivot = arr[end];
   
    for(int j = start ; j < end; j++){
       
        if(arr[j]<pivot){
            i++;
           
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]= temp;
        }
    }
        int temp = arr[i+1];  
        arr[i+1] = arr[end];  
        arr[end] = temp;  
        return i+1;  
}

void quicksort(int arr[], int start, int end){
   
    if(start < end ){
        int part = partition(arr,start,end);
       
         quicksort(arr, start, part - 1);  
            quicksort(arr, part + 1, end);  
    }
}

int main() {

    int arr[]={2,8,1,3,6,7,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   
    quicksort(arr,0,n-1);
   
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
   
    return 0;
}
