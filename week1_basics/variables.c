#include <stdio.h>

int main()
{
  int x ;
  float y ;
  double z ;
  char c ;

  x = 10 ;
  y = 12.5 ;
  z = 4 ;
  c = 'd' ; // remember single quotes for char

  printf("this is an integer: %i\n" , x) ;
  printf("this is a float: %f\n" , y) ;
  printf("this is a double: %f\n" , z) ; // %f for doubles 
  printf("this is a character: %c\n" , c) ;

  return 0 ;
}
