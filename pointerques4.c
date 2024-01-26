#include <stdio.h>
int sumandavg(int a, int b, int *sum , int *avg){
    *sum= a + b;
    *avg= *sum/2;

    
}
int main(){
    int a,b , avg, sum;
    printf("enter the value a=");
    scanf("%d", &a);
    printf("enter the value of b=");
    scanf("%d", &b);
    sumandavg(a,b , &sum , &avg);
    printf("the sum =%d\n", sum);
    printf("the avg=%d", avg);
    return 0;
}