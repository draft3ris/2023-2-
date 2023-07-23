#include <stdio.h>

int main(void) {
  long long n_area, n_headinvig, n_assistinvig;
  scanf("%lld", &n_area);
  long long cand_count[n_area];
  for(int n = 0; n < n_area; n++){
    scanf("%lld", &cand_count[n]);
  }
  scanf("%lld %lld", &n_headinvig, &n_assistinvig);
  long long reqinvig = 0;
  for(int n = 0; n < n_area; n++){
    cand_count[n] -= n_headinvig;
    reqinvig++;
    if (cand_count[n] <= 0) continue;
    else {
      reqinvig += cand_count[n] / n_assistinvig;
      if (cand_count[n]%n_assistinvig) reqinvig++;
    }
  }
  printf("%lld\n", reqinvig);
}