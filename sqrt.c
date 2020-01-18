#include <stdio.h>

float myAbs(float x);

float bsqrt(float a, float b){
   float s = a/2;
   while(myAbs(a-(s*s))>b){
      s=(s+(a/s))/2;
   }
   return s;
}

float myAbs(float x){
   if (x<0){
      return -x;
   } else if (x>0){
      return x;
   } else {
      return 0;
   }
}

int main(void){
   int i;
   for(i=0;i<10;i++){
      float sqrt;
      sqrt=bsqrt((float)i,0.001);
      printf("The sqrt of %d is %f\n",i,sqrt);
   }

   return 0;
}
