#include <map>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

struct city {
    int prefecture;
    int year;
    int index;
    int id;
};

bool year_sorter(city a, city b) { return a.year < b.year; }
bool index_sorter(city a, city b) { return a.index < b.index; }

int main(){
    // N個の県, M個の市
    int N, M;
    cin >> N >> M;

    map<int, vector<city> > data;
    vector<city> ans;

    for (int i = 0; i < M; i++) {
        int P, Y;
        cin >> P >> Y;
        city city;
        city.prefecture = P;
        city.year = Y;
        city.index = i;
        data[P].push_back(city);
    }
    for (int i = 1; i <= N; i++) {
        sort(data[i].begin(), data[i].end(), year_sorter);
        for (int j = 0; j < data[i].size(); j++) {
            data[i][j].id = j+1;
            ans.push_back(data[i][j]);
        }
    }
    sort(ans.begin(), ans.end(), index_sorter);
    for (int i = 0; i < ans.size(); i++) {
        city & element = ans[i];
        cout << setfill('0') << setw(6) << element.prefecture << setfill('0') << setw(6) << element.id << endl;
    }
    return 0;
}
