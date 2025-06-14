#include <stdio.h>
int tmp;

int bubble_sort(int arr[], int n){
    for(int i = 0;i < n-1 ; i++){
        for(int r = 0;r < n-i-1 ; r++){
            if(arr[r] > arr[r + 1]){
                tmp = arr[r];
                arr[r] = arr[r + 1];
                arr[r + 1] = tmp;                
            }
        }   
    }
}

float avgMark(int arr[],int num){
    int sum  = 0, i;
    float avg;

    for(i = 0;i < num; i++ ){
        sum += arr[i];   
    }
    avg = sum / num;
    printf("\nAverage Mark is : %.2f", avg);
    printf("\nMarks greater than average : ");

    for(i = 0;i < num; i++ ){
        if( arr[i] > avg ){
            printf("%d ", arr[i]);
        }   
    }
}

int printArray(int arr[],int num){
    for(int i = 0;i < num; i++ ){
        printf("%d ", arr[i]);
    }
}

int main(){
    int num, i;

    printf("\nEnter No of Element : ");
    scanf("%d", &num);
    
    int arr[num];
    
    
    printf("\nEnter Array Elemnt\n");
    for(i = 0;i < num ; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Array Elemnet before sort : ");
    printArray(arr,num);

    bubble_sort(arr, num);

    printf("\nArray Elemnet After sort : ");
    printArray(arr,num);

    avgMark(arr,num);

    return 0;
}