#include <iostream>
#include <vector>

using namespace std;

void sort_by_second_elem(vector<pair<int, int> > &p_vector) {

    for(int i=0; i<p_vector.size()-1; i++) {
        for(int j=p_vector.size()-1; j>i; j--) {
            if(p_vector.at(j).second < p_vector.at(j-1).second) {
                swap(p_vector.at(j), p_vector.at(j-1));
            }
        }
    }
}

int main() {

    int N;
    cin >> N;

    vector<pair<int, int> > data(N);

    for(int i=0; i<N; i++) {
        cin >> data.at(i).first >> data.at(i).second;
    }

    sort_by_second_elem(data);

    for(int i=0; i<N; i++) {
        cout << data.at(i).first << " " << data.at(i).second << endl;
    }    

}