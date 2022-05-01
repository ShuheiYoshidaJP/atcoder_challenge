#include <iostream>
#include <vector>
using namespace std;

int main() {
    int dn = 4; // digit number
    int on = dn - 1; // option number
    int S;
    int A[dn];
    int expect = 7;

    cin >> S;

    for (int i = dn - 1; i >= 0; i--) {
        A[i] = S % 10;
        S /= 10;
    }

    for (int bit = 0; bit < (1<<on); bit++) {
        int tmp = A[0];
        string result = to_string(tmp);
        for (int i = 0; i < on; i++) {
            if (bit & (1<<i)) {
                tmp += A[i+1];
                result += "+" + to_string(A[i+1]);
            } else {
                tmp -= A[i+1];
                result += "-" + to_string(A[i+1]);
            }
        }
        if (tmp == expect) {
            cout << result << "=" << expect << endl;
            break;
        }
    }

    return 0;
}
