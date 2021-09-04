#include <stdio.h>
int main( )
{
   int var[7] = { 10, 20, 30, 40, 50, 60, 70 } ;
   /* for loop to print value and address of each element of array*/
   for ( int i = 0 ; i < 7 ; i++ )
   {
      printf("var[%d]: value is %d and address is %d\n", i, var[i], &var[i]);
   }
   return 0;
}
