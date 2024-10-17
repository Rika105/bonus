#include <iostream>
using namespace std;

int main() {
    int startCol, startRow, endCol, endRow;
    cin >> startCol >> startRow >> endCol >> endRow;

    if (abs(startCol - endCol) <= 1 && abs(startRow - endRow) <= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

