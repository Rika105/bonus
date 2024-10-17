#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    int page = (n - 1) / k + 1;
  
    int lineOnPage = (n - 1) % k + 1;

    cout << page << " " << lineOnPage << endl;
    return 0;
}


