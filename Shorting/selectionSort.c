#include <stdio.h>

int printArray(int arr[],int num){
    for(int i = 0;i < num; i++ ){
        printf("%d ", arr[i]);
    }
}

int selectSort(int arr[],int n){
    int i, j, min_idx, temp;
    for(i = 0 ; i < n -1 ; i++){
        min_idx = i;
        for(j = i + 1 ; j < n; j++){
            if(arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        temp = arr[min_idx]; 
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int selectSort_descending(int arr[],int n){
    int i, j, max_idx, temp;
    for(i = 0 ; i < n -1 ; i++){
        max_idx = i;
        for(j = i + 1 ; j < n; j++){
            if(arr[j] > arr[max_idx]){
                max_idx = j;
            }
        }
        temp = arr[max_idx]; 
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter array elements:\n");
    for(int i = 0; i < n; i++ ){
        scanf("%d", &arr[i]);
    }
    printf("\nArray before sorting: ");
    printArray(arr, n);

    selectSort(arr, n);
    printf("\nArray after ascending selection sort: ");
    printArray(arr, n);

    selectSort_descending(arr, n);
    printf("\nArray after descending selection sort: ");
    printArray(arr, n);

    return 0;
}