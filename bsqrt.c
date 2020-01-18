#include <stdio.h>

float myAbs(float x);
float bsqrt(float x, float tol);

float bsqrt(float x, float tol){
   float s = x/2;
   while(myAbs(x-(s*s))>tol){
      s=(s+(x/s))/2;
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

