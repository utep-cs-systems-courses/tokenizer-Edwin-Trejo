#include <stdio.h>
#include <stdlib.h>


int main(){

  char userInput[100];
  
  while(1){
    putchar('$');
    fgets(userInput,100,stdin);
    printf("%s\n", userInput);
    
  }
  
  return 0;
  
}


