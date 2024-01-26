#include <stdio.h>

int main() { 
   int i, n;
   int p = 1;
   
   printf("enter the number =",n);
   scanf("%d", &n);

   for(int i = 2; i < n; i++) {
      if((n % i) == 0) {
         p = 0;
      }
   }

   if (p == 1)
      printf("%d is prime number.", n);
   else
      printf("%d is not a prime number.", n);
   return 0;
}