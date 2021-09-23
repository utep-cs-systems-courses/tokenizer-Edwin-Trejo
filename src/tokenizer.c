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
  while(space_char(*str))
    {
      str++;
    }
  return str;
}


char *word_terminator(char *word)
{
  while(non_space_char(*word))
    {
      word++;
    }
  return word;
}
 
int count_words(char *str)
{
  int count= 1;
  int temp = 0;
  while(str[temp]!='\0')
    {
      if(str[1]=='\0')
	{
	  count -=1 ;
	  return count;
	}
      if(non_space_char(str[temp]) && space_char(str[temp+1]))
	{
	  count++;
	}
      temp++;
    }

  return count;
}
/*	
char *copy_str(char *inStr, short len)
{
}

char **tokenize(char* str)
{
}

*/

void print_tokens(char **tokens)
{
}

void free_tokens(char **tokens)
{
  char **curr = tokens;
  while(*curr !=0)
    {
      free(*curr);
      curr++;
    }
  free(tokens);
}



