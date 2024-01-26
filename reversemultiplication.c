#include <stdio.h>
int main(){
 int i=0;
 int n=10;
 for(int i=10; i>=1; i--){
    printf("%dx",n);
    printf("%d=",i);
    printf ("%d \n", n*i);
 }
 return 0;
}