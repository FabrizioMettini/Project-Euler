#include <iostream>

int main() {
    int upper = 1000 - 1;
    int sum_multiples_3 = 3 * ((upper/3) * (upper/3 + 1) / 2);
    int sum_multiples_5 = 5 * ((upper/5) * (upper/5 + 1) / 2);
    int sum_multiples_15 = 15 * ((upper/15) * (upper/15 + 1) / 2);
    int answer = sum_multiples_3 + sum_multiples_5 - sum_multiples_15;
    std::cout << answer << std::endl;
    return 0;
}