#include <stdio.h>
int main() {
    int arr[] = { 10, 20, 30, 40, 50, 60};
    int n = 6;
    int index = 2; 
    for (int i = index; i < n-1; i++){
        arr[i] = arr [i+1];
    }
    n--;
    printf("array after delection: ");
          for(int i = 0; i < n; i++){
          printf("%d", arr[i]);
    }
    printf("/n");
    return 0;
} 
