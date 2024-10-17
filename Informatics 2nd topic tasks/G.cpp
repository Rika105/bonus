#include <iostream>
using namespace std;

int main() {
    int rookRow, rookCol, pieceRow, pieceCol;
    cin >> rookRow >> rookCol >> pieceRow >> pieceCol;

    if (rookRow == pieceRow || rookCol == pieceCol) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
