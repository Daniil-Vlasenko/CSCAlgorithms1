#include <iostream>
#include <vector>

int main() {
    int n, k{}, sum{};
    std::cin >> n;
    std::vector<int> mas;

    for(int i = 1; sum != n; ++i, ++k){
        if(n - (sum + i) > 0 && n - (sum + i) <= i) {
            mas.push_back(n - sum);
            sum += n - sum;
        }
        else {
            mas.push_back(i);
            sum += i;
        }
    }

    std::cout << k << std::endl;
    for(int i = 0; i < mas.size(); ++i)
        std::cout << mas[i] << ' ';

    return 0;
}
