#include <iostream>
#include <string>
using namespace std;

bool Compare(const string& S1, const string& S2) {
    return S1 == S2; 
}

int main() {
    string S1, S2;
    cin >> S1 >> S2; 

    if (Compare(S1, S2)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}





