#include <iostream>

int countWays(int n, int k = 3) {
    int ways = 0;

    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 0;
    }

    for (int i = 1; i <= k; ++i) {
        ways += countWays(n - i, k);
    }

    return ways;
}

int main() {
    int n = 10;
    int k = 3;

    std::cout << countWays(n, k) << std::endl;

    return 0;
}
