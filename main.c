#include <stdio.h>

int main(void) {
  float X;
  printf("Please enter the value of X\n");
  scanf("%f", &X);
  printf("The result is %f", (3*X*X*X*X*X)+(2*X*X*X*X)-(5*X*X*X)-(X*X)+(7*X)-6);
  return 0;
}