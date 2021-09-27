#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

int main()
{
  char str[50];
  puts("Welcome to the Tokenizer!");

  while(1){
    char str[50];
    fputs("Select next action (Enter string = 'a', Show history 'h', Clear history 'c') or 'q' to quit\n> ", stdout);
    fflush(stdout);
    int c;
    while((c = getchar()) == '\n'); /*ignore newlines*/
    if (c == EOF)
      goto done;

    switch (c){
    case 'a':
      printf("You selected Enter string, please enter a string\n");
      fgets(str,50,stdin);
      printf("You entered:");
      puts(str);
      break;
    case 'h':
      puts("You selected Show history");
      break;
    case 'c':
      puts("You selected clear history");
      break;
    case 'q':
      puts("You selected QUIT");
      goto done;
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again\n", c);
    }      
  }
 done:
  return 0;
}
  /*
  char userInput[100];
  /*
  while(1){
    putchar('$');
    fgets(userInput,100,stdin);
    printf("%s\n", userInput);
    
  }
  
  return 0;
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
  
*/
 
 

  
 



