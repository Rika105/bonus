#include <iostream>
using namespace std;

int main() {
    int queenRow, queenCol, pieceRow, pieceCol;
    cin >> queenRow >> queenCol >> pieceRow >> pieceCol;

    if (queenRow == pieceRow || queenCol == pieceCol || abs(queenRow - pieceRow) == abs(queenCol - pieceCol)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;}

