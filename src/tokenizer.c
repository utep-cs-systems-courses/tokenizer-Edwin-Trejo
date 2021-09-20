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
/*Goes through a loop checking for a space or a char to determine if it is the beginning of the word*/
char *word_start(char *str) 
{
  char *ptr;
  for(int i = 0; str[i] != '\t'; i++){
	if(str[i] == ' ' && str[i+1] != ' '){
	  ptr = &(str[i+1]);
	  return ptr;
	}
      }
      return 0;
}


char *word_terminator(char *word)
{
  char *ptr;
  for(int i = 0; word [i] != '\t'; i++){
    if(word[i] != ' ' && word [i+1] == ' '){
      ptr = &(word[i]);
      return ptr;
    }
  }
  return 0;
}
 
int count_words(char *str)
{
  int count = 0;
  if(str[0] == '\0' || str[0] == ' '){
    return 0;
  }
  for (int i = 0; str[i] != '\t'; i++){
    if(str[i] == ' ' && str[i+1] != ' '){
      count++;
    }
  }
  return count++;
}
	






