#include <iostream>
#include <set>
#include <vector>
#include <algorithm>


int main() {
    int t;
    std::set<int> s;
    std::cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 1; i <= 12500; i++)
    {
        auto last = s.end();
        for (auto j=s.begin(); j!=last;j++)
        {
            s.insert(*j*2);
            s.insert(*j*3);
            s.insert(*j*5);
        }
    }
    
    return 0;
}