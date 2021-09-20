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
  char str[30];
  printf("Tokenizer!\n");
  printf("Enter a string:\n");
  fgets(str,30,stdin);

  printf("You entered: %s\n",str);

  /*  char space = ' ';
  printf(space_char(space));*/
 
}


