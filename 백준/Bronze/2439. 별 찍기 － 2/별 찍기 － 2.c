#include <stdio.h>
//print star pattern in ascending order
int main(void) {
  int n, iteration; //variable iteration is number of blank spaces
  scanf("%d", &n);
  iteration = n-1;
  for(int lineno = 1;lineno<=n;lineno++){
    for(int column=1; column<=n; column++){
      if (column <= iteration){
        printf(" ");    
      } else {
        printf("*");
      }
    }
  printf("\n");
  iteration -= 1;
  }  
}