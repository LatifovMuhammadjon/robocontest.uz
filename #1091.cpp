#include <iostream>
#include <set>

using namespace std;

int main() {
  int a;
  set<int> s;
  for (int i=0; i<3; i++) {
    cin >> a;
    s.insert(a);
  }
  cout << s.size();
  return 0;
}