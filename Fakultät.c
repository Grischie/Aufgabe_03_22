#include <stdio.h>

int main() {
  int eingabe, t;
  t = 0;
  printf("\n\nFakultät");
  scanf("%i", &eingabe);
  
  if(eingabe == 0) {
     printf("\n0");
  } else {
     while(eingabe >0) {
       t = t*eingabe;
     }
    printf("\n Das Ergebnis beträgt: %i", t);
  }
  return 0;
}    
