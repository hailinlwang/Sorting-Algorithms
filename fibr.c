#include <stdio.h>


int fib(int x);


/*
int main(void){
   int num = 0;
   printf("input a number: ");
   scanf("%d",&num);
   printf("Fib number is %d",fib(num));
}
*/

int fib(int x){
   if(x==1){
      return 1;
   } else if(x==2){
      return 1;
   } else {
      return fib(x-1)+fib(x-2);
   }
}
