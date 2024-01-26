#include <stdio.h>
int temp(int c);
int main(){
  int c;
  printf("enter temp in c", c);
  scanf("%d", &c);
  printf("FARHENIT= %d", temp(c));
return 0;
}
int temp(int c){
    int result;
    result = (9*c/5 + 32);
    return result ;

}
