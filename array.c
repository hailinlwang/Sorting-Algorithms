#include<stdio.h>
#include<stdlib.h>

int main(void){
   int i = 0;
   int x[10];
   int sizex=10;

   int j=0;
   char y[10];
   int sizey = 10;
 
  
   int *z = NULL;
   int sizez = 10;  
 
   for (i=0;i<sizex;i=i+1){
      printf("%d\n", x[i]);
   }
   

   printf("=============\n");

   for ( i=0;i<sizex;i=i+1){
      x[i] = 0;
   }


   /*
   for (i=0;i<sizex;i=i+1){
      printf("%d\n", x[i]);
   }
   
   printf("=============\n");
   
   printf("Enter a %d long word: ",sizey);
   scanf("%s",&y);

   printf("The string is %s\n",&y); 
   
   for ( j=0;j<sizey-1;j=j+1){
      printf("Enter a 9 letter word: ");
      scanf("%c",&y[j]);
   }   

   for(j=0;j<sizey-1;j=j+1){
      printf("%c",&y[j]);
   }
   */


   printf("=============\n");
   
   z = (int *)malloc(sizez*sizeof(int));
  
   for (i=0;i<sizex;i=i+1){
      printf("%d",z[i]);
   }
   printf("\n");  
 
   printf("=============\n");
   printf("=============\n");
   printf("=============\n");
   printf("=============\n");
   
   
   
   
   
   return 1;
}
