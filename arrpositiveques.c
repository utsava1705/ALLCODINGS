#include <stdio.h>
int main(){
    int arr[]={1,-2,4,-6,8,9,0};
    int count;
    for(int i=0; i<7;i++){
        if(arr[i]<0)
        {
            count++;
        }
        
    }
    printf("%d", count);
}