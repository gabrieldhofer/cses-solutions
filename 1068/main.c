#include "stdio.h"

int solve(const int x, int *ans){
  int i=0;
  ans[i] = x;
  while(ans[i] != 1){
    ans[i+1] = 
      ans[i] % 2 ? 
      ans[i] * 3 + 1 : 
      ans[i] / 2;
    i++;
  }
  ans[i++] = 1;
  return i;
}

void main(){
  int n;
  scanf("%d", &n);
  int ans[2<<15];
  int cnt = solve(n, ans);
  for(int i=0; i<cnt; i++)
    printf("%i ", ans[i]);
  printf("\n");
}

