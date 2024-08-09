#include <stdio.h>
void sum(){
    int a ,b,sum=0;
      printf("Enter two numbers:");
      scanf("%d %d",&a,&b);
      sum=a+b;
      printf("Sum is %d.",sum);
}
int main() {
    // Write C code here
    sum();
    printf("\n");
    printf("Hello world");
    sum();
    return 0;
}
