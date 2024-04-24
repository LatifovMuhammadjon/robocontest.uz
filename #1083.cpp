#include <iostream>
#include <vector>

bool function(int n, int k, std::vector<int> v, int m=-1, int step=0) {
    if (2*step>n-2) return false;
    if (m==-1) m = k-1;
    if (v[m]==k) return true;
    return function(n, k, v, v[m]-1, step+1);
}

int main()
{
    int n, k, el;
    std::vector<int> v;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        std::cin >> el;
        v.push_back(el);
    }
    std::cout << (function(n, k, v)? "Yes":"No");
    return 0;
}
