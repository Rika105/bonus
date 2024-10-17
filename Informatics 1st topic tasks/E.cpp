#include <iostream>

int main() {
    int v, t;
    std::cin >> v >> t;
    long long distance = static_cast<long long>(v) * t;
    int position = (distance % 109 + 109) % 109; 

    std::cout << position << std::endl;
    return 0;
}






