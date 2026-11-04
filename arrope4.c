#include<stdio.h>
int main (){
int arr[50], n , key, i, result=0;
printf("enter no.of elements:");
scanf("%d",&n);
printf("enter %d element:",n);
for (i = 0; i < n; i++){
scanf("%d", &arr[i]);
}
printf("enter element to search :");
scanf("%d", &key);
for (i = 0; i < n;i++){
    if (arr[i] == key ){
    result=1;
    break;
    }
  }
  if (result)
     printf("element found at positon %d\n", i+1);
  else
     printf("element not found\n");
     return 0;
 }
