#include <stdio.h>
#include <math.h>
#include <string.h>



char* deletechar(char* str,int b){
    char newstr[1001];
    for(int i = b; i < strlen(str); i++){
        str[i] = (int)str[i+1];
    }    
  return str;
}

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
