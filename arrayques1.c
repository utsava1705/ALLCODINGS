#include <stdio.h>
int main() {
    int arr[10];
    int* ptr =&arr[0];
    for(int i=0; i<10; i++){
        printf("enter the %d value =", i+1);
        scanf("%d", &arr[i]);
        
        
    }
   int* s= ptr+2; 
  printf("%d", *s);
return 0;
}