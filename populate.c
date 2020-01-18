#include <stdio.h>
#include "fibr.c"

int main(void){
   int length;
   int i = 0;
   printf("Type a number to find the fibonnaci sequence: ");
   scanf("%d",&length);
   int accum[length];
   for(i=1;i<=length;i++){
      accum[i-1] = fib(i);
   }
   for(i=0;i<length;i++){
      printf("%d\n",accum[i]);
   } 
}
