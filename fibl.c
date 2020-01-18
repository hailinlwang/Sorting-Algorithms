#include <stdio.h>

int fib(int x);

int fib(int x){
   int i = 0;
   int n1 = 1;
   int n2 = 1;
   int num = 0;
   if (x>2){
      for(i=2;i<x;i++){
            num = n1 + n2;
            n1 = n2;
            n2 = num;
         }
      return num;
   } else {
      return 1;
   }
}


int main(void){
   int input;
   printf("Input a number: ");
   scanf("%d", &input);
   printf("The number is %d \n",input);
   printf("The fib number is: %d \n", fib(input));
}

