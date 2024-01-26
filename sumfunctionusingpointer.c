#include <stdio.h>
int sum(int a, int b){
    int s;
    s= a+b;
    return s;
}
int multiplication(int a, int b){
    int m;
    m= a*b;
    return m;
}
int main(){
    int x;
    int y;
    printf("enter the values=");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("the sum = %d\n", sum(x,y));
    printf("the multiplication = %d", multiplication(x,y));

}
