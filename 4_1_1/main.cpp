#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

typedef std::pair <int, int> Segment;

std::vector <int> get_covering_set(std::vector <Segment> segments) {
    std::vector <int> result;

    std::sort(segments.begin(), segments.end(),
              [](Segment s1, Segment s2) -> bool {return s1.second < s2.second;});

    for (std::size_t i = 0, j = i; i < segments.size(); j = i) {
        result.push_back(segments[i].second);
        while(++i < segments.size() && segments[i].first <= segments[j].second);
    }

    return result;
}

int main(void) {
    int segments_count;
    std::cin >> segments_count;
    std::vector <Segment> segments(segments_count);
    for (int i = 0; i < segments_count; i++) {
        std::cin >> segments[i].first >> segments[i].second;
    }

    std::vector <int> points = get_covering_set(segments);
    std::cout << points.size() << std::endl;
    for (std::size_t i = 0; i < points.size(); i++) {
        std::cout << points[i] << " ";
    }
    std::cout << std::endl;
}