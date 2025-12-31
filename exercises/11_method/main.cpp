#include "../exercise.h"
#include <iostream>
struct Fibonacci {
    unsigned long long cache[128];
    int cached;

    // TODO: 实现正确的缓存优化斐波那契计算
    unsigned long long get(int i) {
        for (; cached <= i; cached += 1) {
            cache[cached] = cache[cached - 1] + cache[cached - 2];
            std::cout << "fib " << cache[cached] << " i " << cached << '\n';
        }
        return cache[i];
    }
};

int main(int argc, char **argv) {
    Fibonacci fib{
        .cache = {0, 1},
        .cached = 2,
    };
    ASSERT(fib.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << fib.get(10) << std::endl;
    return 0;
}
