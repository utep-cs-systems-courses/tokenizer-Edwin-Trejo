#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

int main()
{
  char userInput[100];
     /*
  while(1){
    putchar('$');
    fgets(userInput,100,stdin);
    printf("%s\n", userInput);
    
  }
  
  return 0;*/
  char str[50];
  char *word = "hello world";
  printf("Tokenizer!\n");
  printf("Enter a string:\n");
  fgets(str,50,stdin);
  printf("You entered: %s",str);
  printf("CountWords = %d\n", count_words(str));
  printf("\n");
  char **tokens = tokenize(str);
  print_tokens(tokens);
  free_tokens(tokens);
  

 
 

  
 
}


