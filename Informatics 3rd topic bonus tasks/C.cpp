#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int start = sqrt(a);
    if (start * start < a) {
        start++;
    }

    for (int i = start; i * i <= b; i++) {
        cout << i * i << " ";
    }

    cout << endl; 
    return 0;
}