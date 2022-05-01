// 部分和問題の組み合わせを出力してみた
// https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361#6-bit-%E5%85%A8%E6%8E%A2%E7%B4%A2

#include <map>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <bitset>
using namespace std;

int main() {
    int n = 3, K = 11;
    vector<int> a = {7,2,9}; // [must] g++ -std=c++11

    for (int bit = 0; bit < (1<<n); bit++) {
        // vector<int> output;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                cout << a[i] << ", ";
                // output.push_back(a[i]);
            }
        }
        // for (int i = 0; i < output.size(); i++) {
        //     cout << output[i] << ", ";
        // }
        cout << "\n";
    }

    return 0;
}
