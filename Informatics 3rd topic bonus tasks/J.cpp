#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        int number;
        cin >> number;
        sum += number;
    }

    cout << sum << endl;
    return 0;
}



