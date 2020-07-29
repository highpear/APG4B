#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int min_n = min(min(A, B), C);
  int max_n = max(max(A, B), C);

  int result = max_n - min_n;

  cout << result << endl;

}
