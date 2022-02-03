#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

typedef std::pair <int, int>  Item;

int main() {
    int n{}, W{};
    double cost{};
    std::cin >> n >> W;
    std::vector<Item> items(n);
    for(int i = 0; i < n; ++i)
        std::cin >> items[i].first >> items[i].second;

    std::sort(items.begin(), items.end(),[](Item i1, Item i2) ->
        bool {return ((double) i1.first / i1.second) > ((double) i2.first / i2.second);});

    for(int i = 0; i < items.size(); ++i) {
        if(items[i].second < W) {
            W -= items[i].second;
            cost += items[i].first;
        }
        else {
            cost += (double) W * items[i].first / items[i].second;
            break;
        }
    }

    std::cout << std::fixed << std::setprecision(3) << cost << std::endl;

    return 0;
}
