#include <stdio.h>

int main()
{
  char word1[50] , word2[50] ;
  printf("please enter both your words\n") ;

  printf("please enter your first word:\n") ;
  scanf("%s" , word1) ;
  printf("please enter your second word:\n") ;
  scanf("%s" , word2) ;

  printf("entered words:\n %s %s" , word1 , word2) ;

  return 0 ;
}
