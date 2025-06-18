#include <stdio.h>

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    for(j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi -1);
        quickSort(arr, pi + 1, high);
    }
}


int main(){
    int arr[20];
    int size, i;

    printf("Quick Sorting\n");
    printf("Enter no of Element : ");
    scanf("%d", &size);

    for(i = 0; i < size; i++){
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nBefore Quick sorted : ");
    for (i = 0;i < size; i++){
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, size -1);

    printf("\nAfter Quick sorted : ");
    for (i = 0;i < size; i++){
        printf("%d ", arr[i]);
    }
}