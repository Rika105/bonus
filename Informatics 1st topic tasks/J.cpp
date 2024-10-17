#include <iostream>

int main() {
    int n;
    std::cin >> n; 
    int next_even = n + 2 - (n % 2);
    std::cout << next_even << std::endl;

    return 0;
}







