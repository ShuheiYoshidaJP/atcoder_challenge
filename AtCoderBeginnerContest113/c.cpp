#include <map>
#include <iostream>
#include <vector>
using namespace std;

struct city {
    int prefecture;
    int year;
    int index;
    int id;
};

bool prefecture_sorter(city a, city b) { return a.prefecture < b.prefecture; }
bool year_sorter(city a, city b) { return a.year < b.year; }
bool index_sorter(city a, city b) { return a.index < b.index; }

int main(){
    // N個の県, M個の市
    int N, M;
    cin >> N >> M;

    map<int, vector<city> > data;

    for (int i = 0; i < M; i++) {
        int P, Y;
        cin >> P >> Y;
        city city;
        city.prefecture = P;
        city.year = Y;
        city.index = i;
        data[P].push_back(city);
    }
    cout << "------------\ninputed data\n";
    for (int i = 1; i <= N; i++) {
        cout << "prefecture = " << i << "\n";
        for (int j = 0; j < data[i].size(); j++) {
            city & element = data[i][j];
            cout << element.year<< " , " << element.index << "\n";
        }
    }
    return 0;
}
