#include <stdio.h>
#include <string.h> //need to use strlen
int main(void) {
  char maxah[1001], reqah[1001];
  scanf("%s", maxah);
  scanf("%s", reqah);
  if (strlen(maxah) >= strlen(reqah)){
    printf("go");
  } else {
    printf("no");
  }
}