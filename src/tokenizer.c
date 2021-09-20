#include <stdlib.h>

int space_char(char c)   /*checks if there is a space char*/
{
  if(c == '\t' || c == ' '){
    return 1;
  }
  return 0;
}

int non_space_char(char c)    /*Checks if the char is a space or not*/
{
  if(c== '\t' || c == ' '){
    return 0;
  }
  return 1;
}






