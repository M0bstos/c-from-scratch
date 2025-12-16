#include <stdio.h>

int main()
{
  int x , y ;
  printf("please enter two integers\n") ;
  
  printf("enter integer 1: ") ;
  scanf("%i" , &x) ;
  
  printf("\nenter integer 2: ") ;
  scanf("%i" , &y) ;

  int sum = x + y ;
  int difference = x - y ;
  int product = x * y ;
  float quotient = (float) x / y ;

  printf("the computed sum is: %i\n" , sum) ;
  printf("the computed difference is: %i\n" , difference) ;
  printf("the computed product is: %i\n" , product) ;  
  printf("the computed quotient is: %f\n" , quotient) ;

  return 0 ;

}
