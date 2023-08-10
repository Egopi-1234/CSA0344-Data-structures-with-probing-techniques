#include <stdio.h>
unsigned long long factorial (int num) {
  unsigned long long result = 1; 
  for (int i = 1; i <=num; i++) {
  	 result *= i;
   }
   return result;
}
int main() { 
   int number;
   printf("Enter a positive integer: "); 
   scanf("%d", &number);
   if (number <0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else { 
        unsigned long long result= factorial (number);
        printf("Factorial of %d is %llu\n", number,result);
}
return 0;
}
