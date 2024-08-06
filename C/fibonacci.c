#include <stdio.h>
int main() {
  int a = 0, b = 1, c = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", a , b);
  c = a+b;

  while (c <= n) {
    printf("%d, ", c);
    a = b;
    b = c;
    c = a+b;
  }

  return 0;
}
