#include <stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("enter the %d number = ", i+1);
        scanf("%d", &arr[0]);
    }
    for(int i=0; i<5; i++){
        printf("the value of %d number is = %d\n",i+1, arr[i] );
    }
return 0;
}