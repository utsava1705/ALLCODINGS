#include<stdio.h>
int main(){
int n;
int factorial=1;
int i;
printf("enter the number = ", n);
scanf("%d", &n);
for(int i=1;i<=n;i++){
factorial = factorial *i;
}
printf("factorial = %d", factorial);
return 0;
}