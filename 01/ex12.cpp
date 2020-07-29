#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int result=1;

  for(int i=0; i<S.size(); i++) {
    char c = S.at(i);
    if(c=='1') {
      continue;
    } else if(c=='+') {
      result++;
    } else {
      result--;
    }
  }

  cout << result << endl;
}
