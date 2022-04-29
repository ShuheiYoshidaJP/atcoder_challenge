#include <map>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

struct point {
    int x;
    int y;
};

int main() {
    int N;
    cin >> N;
    double max;
    double current;

    vector<point> input_data;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        point p;
        p.x = x;
        p.y = y;
        input_data.push_back(p);
    }

    for (int i = 0; i < input_data.size(); i++) {
        point & point1 = input_data[i];
        for (int j = 0; j < input_data.size(); j++) {
            if (i == j) continue;
            point & point2 = input_data[j];
            current = pow((double)point1.x - (double)point2.x, 2.0) + pow((double)point1.y - (double)point2.y, 2.0);
            if (current > max) {
                max = current;
            }
        }
    }

    cout << sqrt(max) << endl;

    return 0;
}
