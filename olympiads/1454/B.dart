import 'dart:io';

void main(List<String> args) {
  const mod=7;
  int t = int.parse(stdin.readLineSync()!);
  for (var i = 0; i < t; i++) {
    String n = stdin.readLineSync()!;
    int rem = 0;
    for (int j=0; j<n.length; j++) {
      rem = (rem*2+int.parse(n[j]))%mod;
    }
    print(rem==0?"Yes":"No");
  }
}