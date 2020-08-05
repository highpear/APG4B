#include <iostream>
#include <map>
using namespace std;

int main() {

    int N;
    map<int, int> data;
    cin >> N;
    
    int max_num, count;
    max_num = count = 0;

    for(int i=0; i<N; i++) {
        int num;
        cin >> num;  // numの出現回数countを数える
        if(data.map::count(num)) {
            data[num]++;
        } else {
            data[num] = 1;
        }

        if(data[num] > count) {
            max_num = num;
            count = data[num];
        }
    }

    cout << max_num << " " << count << endl;

}