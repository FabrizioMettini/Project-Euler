#include <iostream>

int main() {
    long long upper_bound = 4e6;
    long long answer = 0;
    long long a = 0;
    long long b = 1;
    long long c = 1;

    while (c <= upper_bound) {
        if (c % 2 == 0)
            answer += c;
        a = b;
        b = c;
        c = a + b;
    }

    std::cout << answer << std::endl;
    return 0;
}