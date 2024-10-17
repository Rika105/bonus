#include <iostream>

long long sumFromOneToN(int N) {
    if (N >= 1) {
       
        return (static_cast<long long>(N) * (N + 1)) / 2;
    } else {
       
        return (1 + N) * (N - 1) / 2; 
    }
}

int main() {
    int N;
    std::cin >> N;
    std::cout << sumFromOneToN(N) << std::endl;
    return 0;
}



