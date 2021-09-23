#include <stdlib.h>
#include <stdio.h>

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
	
char *copy_str(char *inStr, short len)
{
  char *copy = (char*)malloc((len + 1) * sizeof(char));

  for(int i = 0; i < len; i++)
    {
      copy[i] = inStr[i];
    }
  copy[len] = '\0';
  return copy;
}

char **tokenize(char* str)
{
  //get count of words
  int words = count_words(str);
  //allocate memory
  char **tokens = (char**)malloc((words + 1) * sizeof(char*));
  int i = 0;
  for(i = 0; i < words; i++)
    {
      char* char_start = word_start(str); //pointer to start of word
      str = word_terminator(char_start);
      
      tokens[i] = copy_str(char_start, str - char_start);
    }
  tokens[i] = '\0';
  return tokens;
}



void print_tokens(char **tokens)
{
  char **curr = tokens;
  if(*tokens == 0)
    {
      printf("\n");
    }
  while(*curr != 0)
    {
      printf("%s\n", *curr);
      curr++;
    }
  printf("\n");
    
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



