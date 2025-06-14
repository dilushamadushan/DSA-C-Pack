#include <stdio.h>
#include <string.h>

void sortString(char str[]){
    int n = strlen(str);
    char temp;
    int i, j;

    for(i = 0;i < n - 1; i++){
        for(j = 0;j < n - i - 1;j++){
            if(str[j] > str[j + 1]){
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main(){
    char str[100];

    printf("Enter a String : ");
    scanf("%s", str);
    
    sortString(str);
    printf("Sorted String : %s\n", str);

    return 0;
}