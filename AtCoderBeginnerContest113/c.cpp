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

    map<int, vector<city>> data;
    vector<city> input_cities;
    vector<city> sorting_cities;

    for (int i = 0; i < M; i++) {
        int P, Y;
        cin >> P >> Y;
        city city;
        city.prefecture = P;
        city.year = Y;
        city.index = i;
        input_cities.push_back(city);
    }
    cout << "------------\ninputed data\n";
    for (int i = 0; i < input_cities.size(); i++) {
        city & element = input_cities[i];
        cout << element.prefecture << "," << element.year << "\n";
    }
    cout << "------------\noutputed data\n";
    sort(input_cities.begin(), input_cities.end(), prefecture_sorter);
    int assign_id = 1;
    int current_prefecture = 1;
    for (int i = 0; i < input_cities.size(); i++) {
        city & element = input_cities[i];
        if (current_prefecture != element.prefecture) {
            assign_id = 1;
        }
        element.id = assign_id;
        assign_id++;
    }
    for (int i = 0; i < input_cities.size(); i++) {
        city & element = input_cities[i];
        cout << element.prefecture << "," << element.year << "," << element.index << "," << element.id << "\n";
    }
    return 0;
}
