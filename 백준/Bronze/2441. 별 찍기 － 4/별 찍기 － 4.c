#include <stdio.h>
//print star pattern in descending order, right aligned
int main(void) {
  int n, space; //variable space for printing spaces
  int column = 0;
  scanf("%d", &n); 
  for (int blankcount = 0; blankcount<n; blankcount++){
    if (blankcount > 0){
      column = blankcount; space = blankcount;
      for(;space>0;space--){
        printf(" ");
      }
    }
    for(; column<n; column++){
      printf("*");
    }
  printf("\n");
  }
}