#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int c = 0;

  srand((unsigned)time(NULL));

  printf("Tossing a coin...\n");

  for(int i = 1; i <= 3; i++){
      if(rand()%2 == 0){ printf("Round %d: Heads\n", i); c++; }
      else printf("Round %d: Tails\n", i);
    }

  printf("Heads: %d, Tails: %d\n", c, 3-c);
  if(c >= 2) printf("You won!\n");
  else printf("You lost\n");

  return 0;
}
