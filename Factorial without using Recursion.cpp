#include<stdio.h>

int factorial (int n) {
	if (n==0){
     return 1;
   } else {
return n *factorial (n-1);
   }
}

int main(){
  int num;
  printf("Enter the Positive Integer: ");
  scanf("%d", &num);
   if (num < 0) {
     printf("Factorial is not assigned for NEGATIVE numbers:.\n"); 
   } else { 
    int result=factorial (num);
	 printf("Factorial of %d is %d\n", num, result);
}
return 0;
}
