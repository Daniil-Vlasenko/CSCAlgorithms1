#include <iostream>
#include <map>
#include <vector>
using namespace std;


struct Point{
    Point(char letter, int frequency, int left, int right) :
        letter(letter), frequency(frequency), left(left), right(right) {}
    char letter{};
    int frequency{}, left{}, right{};
};



int main() {
    string str;
    cin >> str;
    map<char, int> frequency;
    for(auto c: str)
        frequency[c] = frequency.find(c) == frequency.end() ? 1 : frequency[c] + 1;
    size_t n = frequency.size();

    vector<Point> tree(2 * n - 1);
    for(auto i: frequency)
        tree.push_back(* new Point(i.first, i.second, 0, 0));

    for(size_t i = n + 1; i < 2 * n; ++i) {

    }


    return 0;
}
