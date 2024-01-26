#include <stdio.h>
int main(){
    int i;
    int n=0;
    do{
        
        n=n+i;
        i++;
    }while(i<=10);
    printf("sum of numbers = %d",n);
    return 0;
}