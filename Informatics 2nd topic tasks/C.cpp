#include <iostream>
using namespace std;

int main() {
    int systemAnswer, studentAnswer;
    cin >> systemAnswer >> studentAnswer;

    if ((systemAnswer == 1 && studentAnswer == 1) || (systemAnswer != 1 && studentAnswer != 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
