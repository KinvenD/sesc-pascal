#include <stdio.h>
#include <math.h>
#include <string.h>


int factorial(int a){
  int b = 1;
  for(int i = 1; i<=a; i++){
    b = b * i;
  }
  return (int)b;
}


int culone(int n,int m){
  return (factorial(n)/(factorial(m) * factorial(n-m)));
}


int main() {
  int x = 0;
  int y = 0;
  scanf("%d%d", &y, &x);
  //printf("dcsdcsdc");
  printf("%d", culone(y-1,x-1));
  return 0;
}
