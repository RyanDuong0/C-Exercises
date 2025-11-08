#include <stdio.h>

int main(){
  int c;
  int count = 0;

  while(count < 10 && (c = getchar()) != EOF){
    if(c == '\n'){
      continue;
    }

    if(c == ' '){
      continue;
    }

    printf("Your character: %c\n", c);
    count++;
  }

  return 0;
}
