#include<stdio.h>

int x = 10;
int *y = &x;
int **z = &y;


int main (void) {
   /*
   printf("%d\n",x);
   printf("%d\n",y);
   printf("%d\n",*y);
   printf("%d\n",*z);
   printf("%d\n",**z);
   */
     
   
   printf("%d\n",x);
   printf("%d\n",&x);
   printf("%d\n",&y);
   printf("%d\n",&z);
   return 0;

}

