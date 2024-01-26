#include <stdio.h>
int main(){
    int a;
    printf("enter a number");
scanf("%d",&a);
    int* ptr = &a;
    printf("the address of the variable stored =%p\n", &a);
    printf("the address of the variable stored =%p\n", ptr);
    printf("the address of the variable stored =%p\n", &ptr);
    printf("the value of them adress= %d", *ptr);
return 0;
}