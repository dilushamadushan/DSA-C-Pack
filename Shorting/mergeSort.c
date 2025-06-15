#include <stdio.h>

void mergeSort(int arr[], int min, int mid, int max){
    int temp[50];
    int i, j, k;
    
    i = min;
    j = mid + 1;
    k = 0;

    while(i <= mid && j <= max){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid){
        temp[k++] = arr[i++];
    }

    while(j <= max){
        temp[k++] = arr[j++];
    }

    for(i = min,j = 0; i <= max;i++,j++){
        arr[i] = temp[j];
    }
}

void partition(int arr[], int min ,int max){
    int mid;

    if(min < max){
        mid = (min + max) / 2;
        partition(arr, min, mid);
        partition(arr, mid + 1, max);
        mergeSort(arr, min, mid, max);
    }
}

int main(){
    int arr[30];
    int i, size;
    printf("Merge sorting\n");
    printf("Enter total no of element : ");
    scanf("%d", &size);

    for (i = 0;i < size; i++){
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before Merge sorted : ");
    for (i = 0;i < size; i++){
        printf("%d ", arr[i]);
    }
    
    partition(arr,0,size-1);

    printf("\nAfter Merge sorted : ");
    for (i = 0;i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}