#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>


int get_pos(const std::vector<int> &numbers, int number) {
    int left{}, right = numbers.size() - 1, medium;
    while(left <= right) {
        medium = left + (right - left) / 2;;
        if(numbers[medium] == number)
            return medium + 1;
        if(numbers[medium] > number)
            right = medium -1;
        else
            left = medium + 1;
    }
    return -1;
}

int main(void) {
    size_t number_count;
    std::cin >> number_count;
    std::vector<int> numbers(number_count);
    for (auto &number:numbers) {
        std::cin >> number;
    }
    assert(std::is_sorted(numbers.begin(), numbers.end()));

    size_t query_count;
    std::cin >> query_count;
    while (query_count-- > 0) {
        int number;
        std::cin >> number;
        std::cout << get_pos(numbers, number) << " ";
    }
    std::cout << std::endl;

    return 0;
}