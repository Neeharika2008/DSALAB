#include<stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element = 25, index = 2; 
    for (int i = n-1; i >= index; i--){
    arr[i+1] = arr[i];
    arr[index] = element;
    n++;
    printf("array after insertion : ");
    for (int i = 0; i < n; i++){
    printf("%d", arr[i]);
    }
    }
    printf(" /n");
    return 0;
    }
    
    
