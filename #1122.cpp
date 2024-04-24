#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;
  short counter = 0;
  bool result = true;
  while (n>0) {
    if (n%2==0) { 
    result=false;
    break;
    }
    n/=10;
    counter++;
  }
  if (counter%2==0)
  {
    result = false;
  }
  cout << (result?"YES":"NO");
  return 0;
}