#include <stdio.h>
#include "bsqrt.c"

float myAbs(float x);

float bsqrt(float x, float tol);

int main(void){
   int i;
   for(i=0;i<10;i++){
      float sqrt;
      sqrt=bsqrt((float)i,0.001);
      printf("The sqrt of %d is %f\n",i,sqrt);
   }

   return 0;
}
