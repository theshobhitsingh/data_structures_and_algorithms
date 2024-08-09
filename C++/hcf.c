#include <iostream>
using namespace std;

int main() {
  int x = 50;
  int y = 100;
  int temp, hcf;

  if (x > y) {
    temp = x;
    x = y;
    y = temp;
  }

  for(int i = 1; i < (x+1); i++) {
    if (x%i == 0 && y%i == 0)
      hcf = i;
  }

  cout<<"HCF of "<<x<<" and "<<y<<" is: "<<hcf;
  return 0;
}
