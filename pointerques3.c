#include <stdio.h>
int times(int n)
{
    int s;
    int* ptr= &n;
    s= *ptr *10;

return s;
}
int main(){
    int t;
    int* ptr = &t;
    printf("enter the value of n=");
    scanf("%d", &t);
    printf("10 times value = %d", times(*ptr));

    return 0;


}