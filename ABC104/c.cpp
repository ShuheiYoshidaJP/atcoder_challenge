#include <iostream>
#include <vector>
using namespace std;

// まだ途中

struct problem {
    int p, c;
};

int main() {
    int D, G;
    cin >> D >> G;
    vector<problem> problems;

    for (int i = 0; i < D; i++) {
        int p, c;
        problem input;
        cin >> p >> c;
        input.p = p;
        input.c = c;
        problems.push_back(input);
    }



    return 0;
}
