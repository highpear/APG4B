#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  int ans[N-1];
  bool errflg = false;
  int erridx = -1;

  // ここにプログラムを追記
  for(int i=0; i<N; i++) {
    string op;
    int B;
    cin >> op >> B;

    if(op == "+") {
    A += B; 

    } else if(op == "-") {
    A -= B;

    } else if(op == "*") {
    A *= B; 

    } else if(op == "/") {
      if(B == 0) {
        errflg = true;
        if(erridx < 0) {
            erridx = i;
        }
        continue;

      } else {
        A /= B;

      }

    }
    ans[i] = A;

  }


  for(int i=0; i<N; i++) {
    if(i == erridx) {
      cout << "error" << endl;
      break;
    }
    cout << i+1 << ":" << ans[i] << endl;
  }

}
