#include <stdio.h>
int main(){
    int a=34;
    int b =57;
    printf("%d   %d\n",a, b);
    int temp;
    temp= a;
    a=b;
    b= temp;
    printf("%d   %d", a , b);
    return 0;
}