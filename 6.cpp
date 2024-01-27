#include <iostream>

int main() {
    long long n = 100LL;
    long long sum = n * (n+1) / 2;
    long long square_of_sum = sum * sum;
    long long sum_of_squares = n * (n+1) * (2*n+1) / 6;
    long long answer = square_of_sum - sum_of_squares;
    std::cout << answer << std::endl;
    return 0;
}