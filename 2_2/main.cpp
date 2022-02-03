#include <cassert>
#include <iostream>

class Fibonacci {
public:
    static int get(int n) {
        assert(n >= 0);
        int first = 1, second = 0;
        for(int count = 1; count < n; ++count) {
            int tmp = first;
            first += second;
            second = tmp;
        }
        return first;
    }

    static int get_last_digit(int n) {
        assert(n >= 1);
        int first = 1, second = 0;
        for(int count = 1; count < n; ++count) {
            int tmp = first;
            first = (first + second) % 10;
            second = tmp;
        }
        return first;
    }
};

int main() {
    int n;
    std::cin >> n;
    std::cout << Fibonacci::get_last_digit(n) << std::endl;
    return 0;
}