#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> data(N);
  int sum=0;

  for(int i=0; i<N; i++) {
    cin >> data.at(i);
    sum += data.at(i);
  }

  int ave=sum/N;
  
  for(int i=0; i<N; i++) {
    cout << abs(data.at(i)-ave) << endl;
  }
}
