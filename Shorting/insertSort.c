#include <stdio.h>

int printArray(int arr[],int num){
    for(int i = 0;i < num; i++ ){
        printf("%d ", arr[i]);
    }
}

int insertSort(int arr[], int n){
    int i, temp, j;

    for(i = 1;i < n; i++){
        temp = arr[i];
        j = i - 1;
        while((temp < arr[j]) && (j >= 0)){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int insertSort_descending(int arr[], int n){
    int i, temp, j;

    for(i = 1;i < n; i++){
        temp = arr[i];
        j = i - 1;
        while((temp > arr[j]) && (j >= 0)){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    printf("Array before sorting: ");
    printArray(arr, n);

    insertSort(arr, n);
    printf("\nArray after ascending insertion sort: ");
    printArray(arr, n);

    insertSort_descending(arr, n);
    printf("\nArray after descending insertion sort: ");
    printArray(arr, n);

    return 0;
}