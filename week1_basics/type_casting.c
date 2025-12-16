#include <stdio.h>

int main()
{
  int x , y ;
  printf("please enter two integers:\n") ;

  printf("enter integer 1: ") ;
  scanf("%i" , &x) ;

  printf("\nenter integer 2: ") ;
  scanf("%i" , &y) ;

  int quot = x / y ;
  float float_quot = (float) x / y ;

  printf("\ntheir normal quotient is: %i\n their cast typed quotient is: %f" , quot , float_quot) ;

  return 0 ;
}
