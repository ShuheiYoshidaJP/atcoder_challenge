#include <map>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <bitset>
using namespace std;

string arrow(int i) {

    int bitset_number = 8;

    string text;
    for (int j = 0; j < (bitset_number-1)-i; j++) {
        text += " ";
    }
    text += "↑";
    for (int k = 0; k < i; k++) {
        text += " ";
    }
    return text;
}


int main() {

    int n = 3;

    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<n); ++bit) {

        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                cout << bitset<8>(bit);
                cout << "\n" << bitset<8>(1<<i) << "\n";
                cout << arrow(i) << "\n\n";
            }
        }
    }

    return 0;
}
