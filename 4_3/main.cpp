#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n{};
    string input;
    cin >> n;
    priority_queue<int> queue;
    cin.ignore();

    for(int i = 0; i < n; ++i) {
        cin >> input;
        if(input == "ExtractMax") {
            cout << queue.top() << endl;
            queue.pop();
        }
        if(input == "Insert") {
            cin >> input;
            queue.push(atoi(input.c_str()));
        }
    }

    return 0;
}
