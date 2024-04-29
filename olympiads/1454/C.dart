import 'dart:io';
import 'dart:math';
int gcd(int a, int b) {
  if (b==0) return a;
  return gcd(b, a%b);
}
void main(List<String> args) {
  Iterable<int> nums = stdin.readLineSync()!.split(" ").map(int.parse);
  int a = nums.elementAt(0);
  int k = nums.elementAt(1);
  int b = nums.elementAt(2);
  int m = nums.elementAt(3);
  int x = nums.elementAt(4);
  int right = x~/(a+b);
  int left = 0;
  int mid;
}

// (a+b)*n-n~/k-n~/m+n~/g
