#include <stdio.h>
//print star pattern in descending order
int main(void) {
  int n;
  scanf("%d", &n);
  for (; n>0; n--){
    for(int column=1; column<=n; column++){
      printf("*");
    }
  printf("\n");
  }
}