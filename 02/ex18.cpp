#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char> > result(N, vector<char>(N, '-'));

  for(int i=0; i<M; i++) {
    int w = A.at(i);
    int l = B.at(i);

    result.at(w-1).at(l-1) = 'o';
    result.at(l-1).at(w-1) = 'x';
  }

  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      if(j!=N-1) {
        cout << result.at(i).at(j) << ' ';
      } else {
        cout << result.at(i).at(j) << endl;
      }
    }
  }
}
