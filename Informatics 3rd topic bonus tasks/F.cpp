
#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    cout << reversed << endl;
    return 0;}
