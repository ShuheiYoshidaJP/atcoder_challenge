#include <map>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <bitset>
using namespace std;


int main() {

    // a << b

    int a, b, n;

    cin >> a >> b;
    n = a << b;
    cout << a << " << " << b << "←これを行います" << endl;
    cout << bitset<8>(a) << "を左に" << b << "だけずらします。" << endl;
    cout << bitset<8>(n) << " = " << n << endl;

    return 0;
}
