#include <stdio.h>

int main()
{
  printf("enter an integer: ") ;
  int x ;
  scanf("%i" , &x) ;

  printf("enter a float: ") ;
  float y ;
  scanf("%f" , &y) ;

  printf("the inputted integer was: %i\n" , x) ;
  printf("the inputted float was: %f\n" , y) ;

  return 0 ;
}
